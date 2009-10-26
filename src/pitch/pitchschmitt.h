/*
  Copyright (C) 2003-2009 Paul Brossier <piem@aubio.org>

  This file is part of aubio.

  aubio is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  aubio is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with aubio.  If not, see <http://www.gnu.org/licenses/>.

*/

/** \file 

   Pitch detection using a Schmitt trigger 
 
   This pitch extraction method implements a Schmitt trigger to estimate the
   period of a signal.

   This file was derived from the tuneit project, written by Mario Lang to
   detect the fundamental frequency of a sound.
   
   see http://delysid.org/tuneit.html 

*/

#ifndef _PITCHSCHMITT_H
#define _PITCHSCHMITT_H

#ifdef __cplusplus
extern "C" {
#endif

/** pitch detection object */
typedef struct _aubio_pitchschmitt_t aubio_pitchschmitt_t;

/** execute pitch detection on an input buffer 
 
  \param p pitch detection object as returned by new_aubio_pitchschmitt 
  \param input input signal window (length as specified at creation time) 
  \param output pitch period estimates, in samples
 
*/
void aubio_pitchschmitt_do (aubio_pitchschmitt_t *p, fvec_t * in, fvec_t * out);
/** creation of the pitch detection object
 
  \param size size of the input buffer to analyse 
 
*/
aubio_pitchschmitt_t * new_aubio_pitchschmitt (uint_t bufsize);
/** deletion of the pitch detection object
 
  \param p pitch detection object as returned by new_aubio_pitchschmitt 
 
*/
void del_aubio_pitchschmitt (aubio_pitchschmitt_t *p);


#ifdef __cplusplus
}
#endif

#endif /* _PITCHSCHMITT_H */

