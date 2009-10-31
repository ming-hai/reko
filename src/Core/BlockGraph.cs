/* 
 * Copyright (C) 1999-2009 John K�ll�n.
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

using Decompiler.Core.Lib;
using System;
using System.Collections.Generic;
using System.Text;

namespace Decompiler.Core
{
    public class BlockGraph : DirectedGraph<Block>
    {
        private ICollection<Block> blocks;

        public BlockGraph(ICollection<Block> blocks)
        {
            this.blocks = blocks;
        }

        #region DirectedGraph<Block> Members

        public ICollection<Block> Predecessors(Block node)
        {
            return node.Pred;
        }

        public ICollection<Block> Successors(Block node)
        {
            return node.Succ;
        }

        public ICollection<Block> Nodes
        {
            get { return blocks; }
        }

        public void AddEdge(Block nodeFrom, Block nodeTo)
        {
            nodeFrom.Succ.Add(nodeTo);
            nodeTo.Pred.Add(nodeFrom);
        }

        public void RemoveEdge(Block nodeFrom, Block nodeTo)
        {
            nodeFrom.Succ.Remove(nodeTo);
            nodeTo.Pred.Remove(nodeFrom);
        }

        public bool ContainsEdge(Block from, Block to)
        {
            return from.Succ.Contains(to);
        }

        #endregion
    }
}
