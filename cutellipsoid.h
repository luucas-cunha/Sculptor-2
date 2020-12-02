#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutEllipsoid serve para desativar todos os voxels que
 * satisfazem a equação da elipsóide.
 */
class CutEllipsoid : public FiguraGeometrica {
private:
    /**
     * @brief xcenter é a posição do centro da elipsóide de voxels no eixo X
     */
    int xcenter;
    /**
     * @brief ycenter é a posição do centro da elipsóide de voxels no eixo Y
     */
    int ycenter;
    /**
     * @brief zcenter é a posição do centro da elipsóide de voxels no eixo Z
     */
    int zcenter;
    /**
     * @brief rx é o raio da elipsóide de voxels no eixo X
     */
    int rx;
    /**
     * @brief ry é o raio da elipsóide de voxels no eixo Y
     */
    int ry;
    /**
     * @brief rz é o raio da elipsóide de voxels no eixo Z
     */
    int rz;
public:
    /**
     * @brief CutEllipsoid é o construtor da classe.
     * @param xcenter é a posição do centro da elipsóide de voxels no eixo X
     * @param ycenter é a posição do centro da elipsóide de voxels no eixo Y
     * @param zcenter é a posição do centro da elipsóide de voxels no eixo Z
     * @param rx é o raio da elipsóide de voxels no eixo X
     * @param ry é o raio da elipsóide de voxels no eixo Y
     * @param rz é o raio da elipsóide de voxels no eixo Z
     */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief ~CutEllipsoid é o destrutor da classe.
     */
    ~CutEllipsoid(){};
    /**
     * @brief draw instrui a elipsóide de voxels a se remover de um objeto do tipo Sculptor. 
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
