#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"



class Sculptor
{
    protected:
        Voxel ***v; //ponteiro triplo para matriz 3D
        int nx,ny,nz; //dimensoes
        float r,g,b,a; //cores e transparencia

     public:
      Sculptor(int _nx, int _ny, int _nz); //construtor
      ~Sculptor(); //destrutor
      void setColor(float r, float g, float b, float alpha); //define a cor e transparencia do desenho
      void putVoxel(int x, int y, int z); //ativa as propriedades de um voxel
      void cutVoxel(int x, int y, int z); //desativa as propriedades de um voxel
      void putBox(int x0, int x1, int y0, int y1, int z0, int z1); //ativa um conjuto de voxel
      void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); //desativa um conjuto de voxel
      void putSphere(int xcenter, int ycenter, int zcenter, int radius); //ativa todos os voxels que formam uma esfera
      void cutSphere(int xcenter, int ycenter, int zcenter, int radius); //desativa todos os voxels que formam uma esfera
      void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //ativa todos os voxels que formam uma elipsoide
      void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //desativa todos os voxels que formam uma elipsoid
      void writeOFF(char *filename); //grava a escultura no formato OFF no arquivo filename

};

#endif // SCULPTOR_H