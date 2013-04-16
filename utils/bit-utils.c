/*********************************************************************
* embedded utilities: bit tools
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

/* embedded utilities: bit tools
 *   Tools for twiddlin' bits!
 *  
 *   All of the macros/functions are prepended with BT or bt (ala bit tools)
 */

#define BT_NTH(nth) ( (1 << (nth)) )

#define BT_RIGHT_NTH(nth) ( (~BT_NTH(nth+1)) )
