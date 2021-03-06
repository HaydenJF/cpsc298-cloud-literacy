/*
    polyhedra.h

    Copyright (C) 2013 by Don Cross  -  http://cosinekitty.com/raytrace

    This software is provided 'as-is', without any express or implied
    warranty. In no event will the author be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
       distribution.
*/

#ifndef __DDC_POLYHEDRA_H
#define __DDC_POLYHEDRA_H

#include "imager.h"

namespace Imager
{
    class Dodecahedron: public TriangleMesh     // 12 faces, 20 edges
    {
    public:
        Dodecahedron(Vector center, double scale, const Optics& optics);

    private:
        void AddFace(        
            int aPointIndex, int bPointIndex, int cPointIndex, int dPointIndex, int ePointIndex, 
            const Optics& optics, 
            double edge);

        void CheckEdge(int aPointIndex, int bPointIndex, double edge) const;
    };

    class Icosahedron: public TriangleMesh      // 20 faces, 12 edges
    {
    public:
        Icosahedron(Vector center, double scale, const Optics& optics);
    };
}

#endif // __DDC_POLYHEDRA_H
