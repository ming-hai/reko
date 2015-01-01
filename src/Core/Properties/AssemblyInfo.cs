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

using System.Reflection;
using System.Runtime.CompilerServices;

//
// General Information about an assembly is controlled through the following 
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
//
[assembly: AssemblyTitle("Decompiler core")]
[assembly: AssemblyDescription("Core functionality for decompiler.")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany(Decompiler.AssemblyMetadata.Company)]
[assembly: AssemblyProduct(Decompiler.AssemblyMetadata.Product)]
[assembly: AssemblyCopyright(Decompiler.AssemblyMetadata.Copyright)]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyCulture("")]

[assembly: AssemblyVersion(Decompiler.AssemblyMetadata.AssemblyVersion)]
[assembly: AssemblyFileVersion(Decompiler.AssemblyMetadata.AssemblyFileVersion)]

namespace Decompiler
{
    public static class AssemblyMetadata
    {
        public const string AssemblyVersion = "0.3.0.0";
        public const string AssemblyFileVersion = "0.3.1.0";
        public const string Product = "Decompiler";
        public const string Copyright = "Copyright � 1999-2015 John K�ll�n";
        public const string Company = "John K�ll�n Konsult AB";
    }
}