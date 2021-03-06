/* 
    This file is part of WARG's computer-vision

    Copyright (c) 2015, Waterloo Aerial Robotics Group (WARG)
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Usage of this code MUST be explicitly referenced to WARG and this code 
       cannot be used in any competition against WARG.
    4. Neither the name of the WARG nor the names of its contributors may be used 
       to endorse or promote products derived from this software without specific
       prior written permission.

    THIS SOFTWARE IS PROVIDED BY WARG ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL WARG BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
	
#ifndef PICTURE_IMPORT_H_INCLUDED
#define PICTURE_IMPORT_H_INCLUDED

#include <opencv2/highgui/highgui.hpp>
#include <string>
#include <vector>
#include "csvreading.h"
#include <dirent.h>
#include "imgimport.h"


/** 
 * @class PictureImport
 *
 * @brief A subclass of Imageimport. Specialized to read JPEG files and metadata and generate Frame objects.
 *
 *
 */

class PictureImport : public ImageImport {
    public:
        /**
         *@brief Creates a PictureImport object
         *
         */
        PictureImport(std::string telemetry_path, std::string filePath);

        ~PictureImport();

        /**
         * @brief Retrieves the next frame to be analyzed
         *
         * @return Frame to be analyzed
         */
        Frame* next_frame();
    private:
        std::string filePath;
	DIR* dr;
	std::vector<Metadata> mdvc;
        int tracker;
};

#endif // PICTURE_IMPORT_H_INCLUDED
