#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutVoxel serve para desativar
 * o voxel na posição (x, y, z).
 */
class CutVoxel : public FiguraGeometrica {
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
     * @brief CutVoxel é o construtor da classe.
     * @param x é a posição do voxel no eixo X
     * @param y é a posição do voxel no eixo Y
     * @param z é a posição do voxel no eixo Z
     */
    CutVoxel(int x, int y, int z);
    /**
     * @brief ~CutVoxel é o destrutor da classe.
     */
    ~CutVoxel(){};
    /**
     * @brief draw instrui o voxel a se remover de um objeto do tipo Sculptor.
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
