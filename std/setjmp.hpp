/*************************************************************************

    This project implements a complete(!) JPEG (10918-1 ITU.T-81) codec,
    plus a library that can be used to encode and decode JPEG streams. 
    It also implements ISO/IEC 18477 aka JPEG XT which is an extension
    towards intermediate, high-dynamic-range lossy and lossless coding
    of JPEG. In specific, it supports ISO/IEC 18477-3/-6/-7/-8 encoding.

    Copyright (C) 2012-2017 Thomas Richter, University of Stuttgart and
    Accusoft.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/

/*
** This is an Os abstraction of the stdlib
** include file. It might possibly contain fixes for
** various Os derivations from the intended stdlib.
**
** $Id: setjmp.hpp,v 1.8 2014/09/30 08:33:18 thor Exp $
*/

#ifndef SETJMP_HPP
#define SETJMP_HPP
#include "config.h"

#ifdef DEPLOY_PICCLIB
# include "pegasus/setjmp.h"
#else
# if defined(HAVE_SETJMP_H) && defined(HAVE_LONGJMP)
#  include <setjmp.h>
# else
#  error "setjmp and longjmp are not available, won't compile without"
# endif
#endif

#endif
