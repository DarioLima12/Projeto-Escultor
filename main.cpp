#include <iostream>
#include "Sculptor.h"

using namespace std;

int main(void)
{
     Sculptor urso(50, 50, 50);
    
     //pernas
     urso.setColor(0.95, 0.95, 0.95, 1.0); //seta a cor para branco gelo claro
     urso.putBox(1, 5, 3, 11, 2, 10); //gera perna
     urso.putBox(10, 14, 3, 11, 2, 10); //gera perna
     urso.putBox(9, 13, 21, 27, 2, 10); //gera perna
     urso.putBox(2, 6, 21, 27, 2, 10); //gera perna

     //unhas
     urso.setColor(0, 0, 0, 1.0); //seta a cor para preto
     urso.putVoxel(3, 26, 2); //unha 1
     urso.putVoxel(5, 26, 2); //unha 2
     urso.putVoxel(10, 26, 2); //unha 3
     urso.putVoxel(12, 26, 2); //unha 4
     urso.putVoxel(2, 10, 2); //unha 5
     urso.putVoxel(4, 10, 2); //unha 6
     urso.putVoxel(11, 10, 2); //unha 7
     urso.putVoxel(13, 10, 2); //unha 8
  
     //corpo
     urso.setColor(0.95, 0.95, 0.95, 1.0); //seta a cor para branco gelo claro
     urso.putBox(0, 15, 0, 18, 10, 22); //gera torax
     urso.putBox(1, 14, 18, 30, 10, 21); //gera quadril
    
     //cabeça
     urso.setColor(0.95, 0.95, 0.95, 1.0); //seta a cor para branco gelo claro
     urso.putBox(4, 11, 30, 37, 13, 20); //gera cabeça

     //orelhas
     urso.setColor(0.8, 0.8, 0.8, 1.0); //seta a cor para cinza
     urso.putBox(3, 5, 34, 35, 19, 21); //orelha 1
     urso.putBox(10, 12, 34, 35, 19, 21); //orelha 2
  
     //focinho
     urso.setColor(0.95, 0.95, 0.95, 1.0); //seta a cor para branco gelo claro
     urso.putBox(5, 10, 37, 40, 13, 16); //gera focinho 

     //boca
     urso.setColor(0, 0, 0, 1.0); //seta a cor para preto
     urso.putBox(5, 10, 39, 40, 13, 14); //gera boca
     urso.putBox(6, 9, 39, 40, 14, 15); //gera boca

     //olhos
     urso.setColor(0, 0, 0, 1.0); //seta a cor para preto
     urso.putBox(5, 6, 36, 37, 16, 17); //gera olho 1
     urso.putBox(9, 10, 36, 37, 16, 17); //gera olho 2

     //sobrancelha
     urso.setColor(0.8, 0.8, 0.8, 1.0); //seta a cor para cinza claro
     urso.putBox(5, 7, 36, 37, 17, 18); //gera sobrancelha 1
     urso.putBox(8, 10, 36, 37, 17, 18); //gera sobrancelha 2

     //detalhe sobrancelha
     urso.setColor(0.65, 0.65, 0.65, 1.0); //seta a cor para cinza
     urso.putVoxel(4, 36, 17); //gera detalhe da sobrancelha 1
     urso.putVoxel(10, 36, 17); //gera detalhe da sobrancelha 2
    
     urso.writeOFF("urso.off");

     return 0;
}