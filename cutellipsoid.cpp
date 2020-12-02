#include "cutellipsoid.h"
#include <cmath>

CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void CutEllipsoid::draw(Sculptor &s){
    int x, y, z;
    float aux;

    for(x = (xcenter - rx); x <= (xcenter + rx); x++){
        for(y = (ycenter - ry); y <= (ycenter + ry); y++){
            for(z = (zcenter - rz); z <= (zcenter + rz); z++){
				aux = ((float) pow((x - xcenter), 2) / pow(rx, 2)) + ((float) pow((y - ycenter), 2) / pow(ry, 2)) + ((float) pow((z - zcenter), 2) / pow(rz, 2));
				
                if(aux <= 1.0){
                    s.cutVoxel(x, y, z);
                }
            }
        }
    }
}
