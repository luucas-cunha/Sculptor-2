#include "putellipsoid.h"
#include <cmath>

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutEllipsoid::draw(Sculptor &s){
    s.setColor(r, g, b, a);
    int x, y, z;
    float aux;

    for(x = (xcenter - rx); x <= (xcenter + rx); x++){
        for(y = (ycenter - ry); y <= (ycenter + ry); y++){
            for(z = (zcenter - rz); z <= (zcenter + rz); z++){
                aux = ((float) pow((x - xcenter), 2) / pow(rx, 2)) + ((float) pow((y - ycenter), 2) / pow(ry, 2)) + ((float) pow((z - zcenter), 2) / pow(rz, 2));

                if(aux <= 1.0){
                    s.putVoxel(x, y, z);
                }
            }
        }
    }
}
