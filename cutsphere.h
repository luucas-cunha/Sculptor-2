#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutSphere serve para desativar todos os voxels
 * que satisfazem a equação da esfera.
 */
class CutSphere : public FiguraGeometrica {
private:
    /**
     * @brief xcenter é a posição do centro da esfera de voxels no eixo X
     */
    int xcenter;
    /**
     * @brief ycenter é a posição do centro da esfera de voxels no eixo Y
     */
    int ycenter;
    /**
     * @brief zcenter é a posição do centro da esfera de voxels no eixo Z
     */
    int zcenter;
    /**
     * @brief radius é o raio da esfera de voxels
     */
    int radius;
public:
    /**
     * @brief CutSphere é o construtor da classe.
     * @param xcenter é a posição do centro da esfera de voxels no eixo X
     * @param ycenter é a posição do centro da esfera de voxels no eixo Y
     * @param zcenter é a posição do centro da esfera de voxels no eixo Z
     * @param radius é o raio da esfera de voxels
     */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief ~CutSphere é o destrutor da classe.
     */
    ~CutSphere(){};
    /**
     * @brief draw instrui a esfera de voxels a se remover de um objeto do tipo Sculptor. 
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
