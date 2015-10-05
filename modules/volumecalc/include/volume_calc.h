/* 
    Copyright (c) 2015, Waterloo Aerial Robotics Group (WARG)
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Usage of this code must be explicitly referenced to WARG and this code 
       cannot be used in any competition against WARG.
    4. Neither the name of the WARG nor the names of its contributors may be used 
       to endorse or promote products derived from this software without specific
       prior written permission.

    THIS SOFTWARE IS PROVIDED BY WARG ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/		

#ifndef VOLUME_CALC_H_INCLUDED
#define VOLUME_CALC_H_INCLUDED

/**
 * @file volume_calc.h
 * 
 * @brief Module for calculating the volume of a target
 *
 */

#include "frame.h" 
#include "target.h"

class VolumeCalc {
    public:
        VolumeCalc();
        ~VolumeCalc();

        /**
         * @brief Calculates the volume of a given target
         *
         * @param frames Frames containing the images to be analyzed
         *
         * @param target Target that should be analyzed
         *
         * @return volume of the specified Target
         */
        double get_volume(const Frame * [] frames, const Target * target);
};

#endif // VOLUME_CALC_H_INCLUDED
