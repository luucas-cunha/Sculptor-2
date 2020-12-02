#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
/**
 * @brief A classe abstrata FiguraGeometrica serve para representar
 * objetos primitivos genéricos.
 */
class FiguraGeometrica {
protected:
    /**
     * @brief r é a dosagem de cor vermelha presente na figura
     */
    float r;
    /**
     * @brief g é a dosagem de cor verde presente na figura
     */
    float g;
    /**
     * @brief b é a dosagem de cor azul presente na figura
     */
    float b;
    /**
     * @brief a é a transparência presente na figura
     */
    float a;
public:
    /**
     * @brief ~FiguraGeometrica é o destrutor virtual da classe.
     */
    virtual ~FiguraGeometrica(){};
    /**
     * @brief draw é uma função virtual pura que instrui o objeto primitivo genérico a se desenhar em um objeto do tipo Sculptor.
     * @param s é a referência para o objeto do tipo Sculptor
     */
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
