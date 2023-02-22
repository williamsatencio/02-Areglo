#include<iostream>
#include"ArregloDes.h"
using namespace std;
int main(){
    Arreglo x;
    x.Insertar_d(10);
    x.Insertar_d(20);
    x.Insertar_d(30);
    x.Eliminar_d(10);
    x.Escribir();

    return 0;
}
