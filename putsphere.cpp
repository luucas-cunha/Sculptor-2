#include "putsphere.h"
#include <cmath>

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutSphere::draw(Sculptor &s){
    s.setColor(r, g, b, a);
    int x, y, z;
    float aux;

    for(x = (xcenter - radius); x <= (xcenter + radius); x++){
        for(y = (ycenter - radius); y <= (ycenter + radius); y++){
            for(z = (zcenter - radius); z <= (zcenter + radius); z++){
                aux = ((float) pow((x - xcenter), 2) / pow(radius, 2)) + ((float) pow((y - ycenter), 2) / pow(radius, 2)) + ((float) pow((z - zcenter), 2) / pow(radius, 2));

                if(aux <= 1.0){
                    s.putVoxel(x, y, z);
                }
            }
        }
    }
}
