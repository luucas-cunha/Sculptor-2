#include "cutbox.h"

CutBox::CutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    this->x0 = x0;
    this->x1 = x1;
    this->y0 = y0;
    this->y1 = y1;
    this->z0 = z0;
    this->z1 = z1;
}

void CutBox::draw(Sculptor &s){
    int x, y, z;
    int aux = 0;

    if(x0 > x1){
        aux = x0;
        x0 = x1;
        x1 = aux;
    }

    if(y0 > y1){
        aux = y0;
        y0 = y1;
        y1 = aux;
    }

    if(z0 > z1){
        aux = z0;
        z0 = z1;
        z1 = aux;
    }

    if(x0 < 0){
        x0 = 0;
    }

    for(x = x0; x <= x1; x++){
        for(y = y0; y <= y1; y++){
            for(z = z0; z <= z1; z++){
                s.cutVoxel(x, y, z);
            }
        }
    }
}
