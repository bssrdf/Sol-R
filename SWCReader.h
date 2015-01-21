/* 
 * Copyright (C) 2014 Cyrille Favreau - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Cyrille Favreau <cyrille_favreau@hotmail.com>
 */

#pragma once

#include <map>

#include "GPUKernel.h"

class RAYTRACINGENGINE_API SWCReader
{
public:
   SWCReader();
   ~SWCReader();

   CPUBoundingBox loadMorphologyFromFile( 
      const std::string& filename,
      GPUKernel& cudaKernel,
      const Vertex& center,
      const bool autoScale,
      const Vertex& scale, 
      bool autoCenter,
      const int materialId );
};
