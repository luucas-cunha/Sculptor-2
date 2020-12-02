#include "interpretador.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

Interpretador::Interpretador(){

}

std::vector<FiguraGeometrica*> Interpretador::parse(std::string filename){
    std::vector<FiguraGeometrica*> figuras;
    std::ifstream fin;
    std::stringstream ss;
    std::string s, instrucao;

    fin.open(filename.c_str());

    if(!fin.is_open()){
        std::cout << "Falha ao abrir o arquivo" << std::endl;
        exit(0);
    }

    while(fin.good()){
        if(fin.good()){
            ss.clear();
			std::getline(fin, s);
            ss.str(s);
            ss >> instrucao;
			
            if(ss.good()){
                // dimensoes
                if(instrucao.compare("dim") == 0){
                    ss >> dimX >> dimY >> dimZ;
                }
                // putvoxel
                else if(instrucao.compare("putvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                    figuras.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
                }
                // cutvoxel
                else if(instrucao.compare("cutvoxel") == 0){
                    int x0, y0, z0;
                    ss >> x0 >> y0 >> z0;
                    figuras.push_back(new CutVoxel(x0, y0, z0));
                }
                // putbox
                else if(instrucao.compare("putbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figuras.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
                }
                // cutbox
                else if(instrucao.compare("cutbox") == 0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figuras.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
                }
                // putsphere
                else if(instrucao.compare("putsphere") == 0){
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                    figuras.push_back(new PutSphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
                }
                // cutsphere
                else if(instrucao.compare("cutsphere") == 0){
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figuras.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
                }
                // putellipsoid
                else if(instrucao.compare("putellipsoid") == 0){
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                    figuras.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
                }
                // cutellipsoid
                else if(instrucao.compare("cutellipsoid") == 0){
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                    figuras.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
                }
            }
        }
    }

	fin.close();
	
    return(figuras);
}

int Interpretador::getDimX(){
    return dimX;
}

int Interpretador::getDimY(){
    return dimY;
}

int Interpretador::getDimZ(){
    return dimZ;
}
