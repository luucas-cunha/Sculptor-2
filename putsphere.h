#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutSphere serve para ativar todos os voxels
 * que satisfazem a equação da esfera e atribuir aos mesmos a
 * cor atual de desenho.
 */
class PutSphere : public FiguraGeometrica {
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
     * @brief PutSphere é o construtor da classe.
     * @param xcenter é a posição do centro da esfera de voxels no eixo X
     * @param ycenter é a posição do centro da esfera de voxels no eixo Y
     * @param zcenter é a posição do centro da esfera de voxels no eixo Z
     * @param radius é o raio da esfera de voxels
     * @param r é a dosagem de cor vermelha presente na esfera de voxels
     * @param g é a dosagem de cor verde presente na esfera de voxels
     * @param b é a dosagem de cor azul presente na esfera de voxels
     * @param a é a transparência presente na esfera de voxels
     */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    /**
     * @brief ~PutSphere é o destrutor da classe.
     */
    ~PutSphere(){};
    /**
     * @brief draw instrui a esfera de voxels a se desenhar em um objeto do tipo Sculptor. 
     * @param s é a referência para o objeto do tipo Sculptor
     */
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
