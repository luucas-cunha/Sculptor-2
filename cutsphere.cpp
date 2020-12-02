#include "cutsphere.h"
#include <cmath>

CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius){
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
}

void CutSphere::draw(Sculptor &s){
    int x, y, z;
    float aux;

    for(x = (xcenter - radius); x <= (xcenter + radius); x++){
        for(y = (ycenter - radius); y <= (ycenter + radius); y++){
            for(z = (zcenter - radius); z <= (zcenter + radius); z++){
				aux = ((float) pow((x - xcenter), 2) / pow(radius, 2)) + ((float) pow((y - ycenter), 2) / pow(radius, 2)) + ((float) pow((z - zcenter), 2) / pow(radius, 2));
				
                if(aux <= 1.0){
                    s.cutVoxel(x, y, z);
                }
            }
        }
    }
}
