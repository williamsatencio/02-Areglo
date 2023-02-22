#define MAX 100
#include<iostream>
using namespace std;
//template <class T>
class Arreglo{
    private:
        //T A[MAX];
        int A[MAX];
        int tope=4;
    public:
        Arreglo();
        void leer();
        void Escribir();
        void Insertar_d(int);
        void Eliminar_d(int);
};
//template <class T>
Arreglo::Arreglo(){
    tope = -1;
}
//template <class T>
void Arreglo :: leer(){
    int n;
    cout<<"Ingrese la cantidad de elementos de n"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    tope = n-1;
}
//template <class T>
void Arreglo::Escribir(){
    cout<<"Ingrese la cantidad de elementos de n"<<endl;
    for(int i=0;i<tope+1;i++){
        cout<<A[i]<<endl;
    }    
}
//template <class T>
void Arreglo :: Insertar_d(int dato){
    if(tope == MAX-1){
        cout<<"El Arreglo esta lleno "<<endl;
    }else{
        tope++;
        A[tope]=dato;
    }
}
//template <class T>

void Arreglo :: Eliminar_d(int dato){
    if(tope != 0){
        int i=1;
        int cen=0;
        while(i<=tope && cen==0){
            if(A[i] == dato){
                cen = 1;
                for(int j=i;j<tope-1;j++){
                    A[j] = A[j+1]; 
                }
                tope--;
            }else{
                i=i+1;
            }
        }
        if(cen==0){
            cout<<"Nose encontro "<<endl;
        }
    }else{
        cout<<"Arreglo vacio ";
    }


}
