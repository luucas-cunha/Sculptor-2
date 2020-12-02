#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutVoxel serve para ativar o voxel na
 * posição (x, y, z) e atribuir ao mesmo a cor atual de
 * desenho (r, g, b, a).
 */
class PutVoxel : public FiguraGeometrica {
private:
    /**
     * @brief x é a posição do voxel no eixo X
     */
    int x;
    /**
     * @brief y é a posição do voxel no eixo Y
     */
    int y;
    /**
     * @brief z é a posição do voxel no eixo Z
     */
    int z;
public:
    /**
     * @brief PutVoxel é o construtor da classe.
     * @param x é a posição do voxel no eixo X
     * @param y é a posição do voxel no eixo Y
     * @param z é a posição do voxel no eixo Z
     * @param r é a dosagem de cor vermelha presente no voxel
     * @param g é a dosagem de cor verde presente no voxel
     * @param b é a dosagem de cor azul presente no voxel
     * @param a é a transparência presente no voxel
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    /**
     * @brief ~PutVoxel é o destrutor da classe.
     */
    ~PutVoxel(){};
    /**
     * @brief draw instrui o voxel a se desenhar em um objeto do tipo Sculptor.
     * @param s é a referência para o objeto do tipo Sculptor 
     */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
