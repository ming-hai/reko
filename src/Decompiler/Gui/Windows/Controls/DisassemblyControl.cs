#region License
/* 
 * Copyright (C) 1999-2015 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Decompiler.Core;
using Decompiler.Core.Machine;
using Decompiler.Gui;
using Decompiler.Gui.Windows.Controls;
using System;
using System.ComponentModel;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Decompiler.Gui.Windows.Controls
{
    /// <summary>
    /// Renders disassembled machine instructions.
    /// </summary>
    public class DisassemblyControl : TextView
    {
        public DisassemblyControl()
        {
            SetStyle(ControlStyles.DoubleBuffer, true);
            SetStyle(ControlStyles.AllPaintingInWmPaint, true);
            SetStyle(ControlStyles.UserPaint, true);
            StartAddressChanged += DisassemblyControl_StateChange;
            TopAddressChanged += DisassemblyControl_StateChange;

            //$TODO: allow user to manipulate these hard-wired constants.
            Styles.Add("opcode", new EditorStyle { Width = 100 });
            Styles.Add("bytes", new EditorStyle { Width = 200 });
        }

        [Browsable(false)]
        public Address StartAddress { get { return startAddress; } set { startAddress = value; StartAddressChanged.Fire(this); } }
        public event EventHandler StartAddressChanged;
        private Address startAddress;

        [Browsable(false)]
        public Address TopAddress { get { return topAddress; } set { topAddress = value; TopAddressChanged.Fire(this); } }
        public event EventHandler TopAddressChanged;
        private Address topAddress;

        [Browsable(false)]
        public Address SelectedAddress
        {
            get { return selectedAddress; }
            set
            {
                selectedAddress = value;
                Invalidate();
                SelectedAddressChanged.Fire(this);
            }
        }
        public event EventHandler SelectedAddressChanged;
        private Address selectedAddress;

        void DisassemblyControl_StateChange(object sender, EventArgs e)
        {
            var g = CreateGraphics();
            Model.MoveTo(topAddress, 0);
            ComputeLayout(g);
            g.Dispose();
            Invalidate();
        }

        protected override bool IsInputKey(Keys keyData)
        {
            switch (keyData & ~Keys.Modifiers)
            {
            case Keys.Down:
            case Keys.Up:
            case Keys.Left:
            case Keys.Right:
                return true;
            default:
                return base.IsInputKey(keyData);
            }
        }

        protected override void OnKeyDown(KeyEventArgs e)
        {
            Debug.Print("Disassembly control: Down:  c:{0} d:{1} v:{2}", e.KeyCode, e.KeyData, e.KeyValue);
            switch (e.KeyCode)
            {
            case Keys.Down:
                Model.MoveTo(Model.CurrentPosition, 1);
                break;
            case Keys.Up:
                Model.MoveTo(Model.CurrentPosition, -1);
                break;
            default:
                base.OnKeyDown(e);
                return;
            }
            e.Handled = true;
        }

        protected override void OnSizeChanged(EventArgs e)
        {
            Invalidate();
            base.OnSizeChanged(e);
        }

        protected override void OnMouseDown(MouseEventArgs e)
        {
            Focus();
            SelectedAddress = GetAddressFromMouseEvent(e.X, e.Y);
            base.OnMouseDown(e);
        }

        private Address GetAddressFromMouseEvent(int p1, int p2)
        {
            var span =  base.GetSpan(new Point(p1, p2));
            if (span == null)
                return null;
            return span.Tag as Address;
        }
    }


    public class DisassemblyRenderer : MachineInstructionWriter
    {
        List<TextSpan> spans = new List<TextSpan>();
        private StringBuilder sb = new StringBuilder();

        public void WriteOpcode(string opcode)
        {
            new DisassemblySpan(opcode, "opcode");
        }

        public void WriteAddress(string formattedAddress, Address addr)
        {
            new AddressSpan(formattedAddress, addr, "address");
        }

        public void Tab()
        {
        }

        public void Write(char c)
        {
            throw new NotImplementedException();
        }

        public void Write(uint n)
        {
            throw new NotImplementedException();
        }

        public void Write(string s)
        {
            throw new NotImplementedException();
        }

        public void Write(string fmt, params object[] parms)
        {
            throw new NotImplementedException();
        }

        internal IEnumerable<TextSpan> GetSpans()
        {
            throw new NotImplementedException();
        }
    }

    public class AddressSpan : TextSpan
    {
        private string formattedAddress;

        public AddressSpan(string formattedAddress, Address addr, string style)
        {
            this.formattedAddress = formattedAddress;
            this.Tag = addr;
            base.Style = style;
        }

        public override string GetText()
        {
            return formattedAddress;
        }
    }

    public class DisassemblySpan : TextSpan
    {
        private string opcode;
        private string p;

        public DisassemblySpan(string opcode, string p)
        {
            // TODO: Complete member initialization
            this.opcode = opcode;
            this.p = p;
        }
        public override string GetText()
        {
            throw new NotImplementedException();
        }
    }
}
