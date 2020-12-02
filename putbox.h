#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutBox serve para ativar todos os voxels
 * no intervalo [x0, x1], [y0, y1], [z0, z1] e atribuir aos mesmos
 * a cor atual de desenho.
 */
class PutBox : public FiguraGeometrica {
private:
    /**
     * @brief x0 é o valor inicial da dimensão X da caixa de voxels
     */
    int x0;
    /**
     * @brief x1 é o valor final da dimensão X da caixa de voxels
     */
    int x1;
    /**
     * @brief y0 é o valor inicial da dimensão Y da caixa de voxels
     */
    int y0;
    /**
     * @brief y1 é o valor final da dimensão Y da caixa de voxels
     */
    int y1;
    /**
     * @brief z0 é o valor inicial da dimensão Z da caixa de voxels
     */
    int z0;
    /**
     * @brief z1 é o valor final da dimensão Z da caixa de voxels
     */
    int z1;
public:
    /**
     * @brief PutBox é o construtor da classe.
     * @param x0 é o início da dimensão da caixa de voxels no eixo X
     * @param x1 é o fim da dimensão da caixa de voxels no eixo X
     * @param y0 é o início da dimensão da caixa de voxels no eixo Y
     * @param y1 é o fim da dimensão da caixa de voxels no eixo Y
     * @param z0 é o início da dimensão da caixa de voxels no eixo Z
     * @param z1 é o fim da dimensão da caixa de voxels no eixo Z
     * @param r é a dosagem de cor vermelha presente na caixa de voxels
     * @param g é a dosagem de cor verde presente na caixa de voxels
     * @param b é a dosagem de cor azul presente na caixa de voxels
     * @param a é a transparência presente na caixa de voxels
     */
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    /**
     * @brief ~PutBox é o destrutor da classe.
     */
    ~PutBox(){};
    /**
     * @brief draw instrui a caixa de voxels a se desenhar em um objeto do tipo Sculptor. 
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // PUTBOX_H
