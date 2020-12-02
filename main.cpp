#include "figurageometrica.h"
#include "sculptor.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include "interpretador.h"
#include <iostream>
#include <vector>

int main(){
	Sculptor *sc;
	
	Interpretador parser;
	
	std::vector<FiguraGeometrica*> figuras;
	
	figuras = parser.parse("C:/Users/Lucas/Documents/Projetos/Escultor/escultura.txt");
	
	sc = new Sculptor(parser.getDimX(), parser.getDimY(), parser.getDimZ());
	
	for(size_t i = 0; i < figuras.size(); i++){
        figuras[i]->draw(*sc);
    }
	
    sc->writeOFF("C:/Users/Lucas/Documents/Projetos/Escultor/arquivo.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete sc;

    return 0;
}
