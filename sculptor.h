#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"

/**
 * @brief A classe Sculptor serve para gerar esculturas
 * tridimensionais através do uso de voxels.
 */
class Sculptor {
protected:
    /**
     * @brief v é a matriz tridimensional de voxels
     */
    Voxel ***v;
    /**
     * @brief nx é a dimensão da matriz no eixo X
     */
    int nx;
    /**
     * @brief ny é a dimensão da matriz no eixo Y
     */
    int ny;
    /**
     * @brief nz é a dimensão da matriz no eixo Z
     */
    int nz;
    /**
     * @brief r é a dosagem de cor vermelha presente no voxel
     */
    float r;
    /**
     * @brief g é a dosagem de cor verde presente no voxel
     */
    float g;
    /**
     * @brief b é a dosagem de cor azul presente no voxel
     */
    float b;
    /**
     * @brief a é a transparência presente no voxel
     */
    float a;
public:
    /**
     * @brief Sculptor é o construtor da classe.
     * @param _nx é a dimensão no eixo X
     * @param _ny é a dimensão no eixo Y
     * @param _nz é a dimensão no eixo Z
     */
    Sculptor(int _nx, int _ny, int _nz);
    /**
     * @brief ~Sculptor é o destrutor da classe.
     */
    ~Sculptor();
    /**
     * @brief setColor define a cor atual de desenho (r, g, b, a).
     * @param _r é a dosagem de cor vermelha
     * @param _g é a dosagem de cor verde
     * @param _b é a dosagem de cor azul
     * @param alpha é a transparência
     */
    void setColor(float _r, float _g, float _b, float alpha);
    /**
     * @brief putVoxel ativa o voxel na posição (x, y, z) (fazendo isOn = true)
     * e atribui ao mesmo a cor atual de desenho (r, g, b, a).
     * @param x é a posição do voxel no eixo X
     * @param y é a posição do voxel no eixo Y
     * @param z é a posição do voxel no eixo Z
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief cutVoxel desativa o voxel na posição (x, y, z) (fazendo isOn = false).
     * @param x é a posição do voxel no eixo X
     * @param y é a posição do voxel no eixo Y
     * @param z é a posição do voxel no eixo Z
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief writeOFF grava a escultura em um arquivo no formato .off.
     * @param filename é o nome do arquivo .off que será criado
     */
    void writeOFF(char* filename);
};

#endif // SCULPTOR_H
