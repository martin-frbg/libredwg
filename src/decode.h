/*****************************************************************************/
/*  LibDWG - Free DWG read-only library                                      */
/*  Copyright (C) 2008, 2009 Free Software Foundation, Inc.                  */
/*                                                                           */
/*  This library is free software, licensed under the terms of the GNU       */
/*  General Public License as published by the Free Software Foundation,     */
/*  either version 3 of the License, or (at your option) any later version.  */
/*  You should have received a copy of the GNU General Public License        */
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.    */
/*****************************************************************************/

///  Funkcioj por dekodigi dwg-datenaron.

#ifndef DECODE_H
#define DECODE_H

#include "bits.h"
#include "dwg.h"

int dwg_decode_structures (Bit_Chain * bitaro, Dwg_Structure * dwg_struct);

#endif