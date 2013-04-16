/*********************************************************************
* embedded utilities: memory addressing tools
* Copyright (C) 2013  Ian O'Hara
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or 
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
************************************************************************/

/* embedded utilties: memory addressing tools
 *   A number of inline functions and macros that are useful for dealing
 *   with memory addresses on embedded systems.
 */

#define STRUCT_FIELD_OFFSET(struct_type, field)  ( &(((struct_type *)(0u))->field) )
