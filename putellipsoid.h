#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief A classe PutEllipsoid serve para ativar todos os voxels que
 * satisfazem a equação da elipsóide e atribuir aos mesmos a cor
 * atual de desenho.
 */
class PutEllipsoid : public FiguraGeometrica {
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
     * @brief PutEllipsoid é o construtor da classe.
     * @param xcenter é a posição do centro da elipsóide de voxels no eixo X
     * @param ycenter é a posição do centro da elipsóide de voxels no eixo Y
     * @param zcenter é a posição do centro da elipsóide de voxels no eixo Z
     * @param rx é o raio da elipsóide de voxels no eixo X
     * @param ry é o raio da elipsóide de voxels no eixo Y
     * @param rz é o raio da elipsóide de voxels no eixo Z
     * @param r é a dosagem de cor vermelha presente na elipsóide de voxels
     * @param g é a dosagem de cor verde presente na elipsóide de voxels
     * @param b é a dosagem de cor azul presente na elipsóide de voxels
     * @param a é a transparência presente na elipsóide de voxels
     */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    /**
     * @brief ~PutEllipsoid é o destrutor da classe.
     */
    ~PutEllipsoid(){};
    /**
     * @brief draw instrui a elipsóide de voxels a se desenhar em um objeto do tipo Sculptor. 
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
