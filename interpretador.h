#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include "figurageometrica.h"
#include <vector>
#include <string>
/**
 * @brief A classe Interpretador serve para analisar arquivos
 * de texto com informações referentes às dimensões e métodos
 * de desenho de esculturas tridimensionais de voxels e interpretá-los.
 */
class Interpretador {
private:
    /**
     * @brief dimX é a dimensão da escultura no eixo X
     */
    int dimX;
    /**
     * @brief dimY é a dimensão da escultura no eixo Y
     */
    int dimY;
    /**
     * @brief dimZ é a dimensão da escultura no eixo Z
     */
    int dimZ;
    /**
     * @brief r é a dosagem de cor vermelha presente na escultura
     */
    float r;
    /**
     * @brief g é a dosagem de cor verde presente na escultura
     */
    float g;
    /**
     * @brief b é a dosagem de cor azul presente na escultura
     */
    float b;
    /**
     * @brief a é a transparência presente na escultura
     */
    float a;
public:
    /**
     * @brief Interpretador é o construtor da classe.
     */
    Interpretador();
    /**
     * @brief parse analisa o arquivo de texto que contém as informações sobre as dimensões da escultura
     * e os métodos de desenho a serem executados.
     * @param filename é o nome do arquivo analisado
     * @return um vetor do tipo ponteiro para FiguraGeometrica
     */
    std::vector<FiguraGeometrica*> parse(std::string filename);
    /**
     * @brief getDimX recupera o valor da dimensão da escultura no eixo X a partir do arquivo analisado.
     * @return a dimensão da escultura no eixo X
     */
    int getDimX();
    /**
     * @brief getDimY recupera o valor da dimensão da escultura no eixo Y a partir do arquivo analisado.
     * @return a dimensão da escultura no eixo Y
     */
    int getDimY();
    /**
     * @brief getDimZ recupera o valor da dimensão da escultura no eixo Z a partir do arquivo analisado.
     * @return a dimensão da escultura no eixo Z
     */
    int getDimZ();
};

#endif // INTERPRETADOR_H
