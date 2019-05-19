#include "Pila.h"
#include <iostream>
#define N 3
// Lo intenté <3 uwu
using namespace std;
typedef struct Pila{
int tope;
int arraypila[N];
}Pila;

void IniciarPila(Pila *pila){
pila->tope=-1
}
bool PilaLlena(Pila *piqqla){
if(pila->tope=N-1){
cout<<"Pila llena"<<endl;
return true;}
}
bool PilaVacia(Pila *pila){
if(pila->tope=-1){
cout<<"Pila vacia"<<endl;
return true;}
}
void Pop(Pila *pila,Libro arraylibro[i]){
if(PilaVacia(pila)){{
  cout<<"Pila vacia"<<endl;
  return false;}
else{
Libro arraylibro[i]=pila->arraypila[pila->tope];
pila->tope--;
return Libro arraylibro[i];
}
}}

}
void Push(Pila *pila,Libro arraylibro[i]){
if(PilaLlena(pila)){
  cout<<"Pila llena"<<endl;
else{
pila->tope++
pila->arraypila[pila->tope]=arraylibro[i];
}
}}
int main()
{   string autor,titulo;
    int paginas;
    Libro arraylibro[5];
    for(i=1;i<=5;i++){
    cout << "Ingrese autor del libro: " << endl;
    cin>>arraylibro[i].setAutor(autor);
    cout << "Ingrese autor del libro: " << endl;
    cin>>arraylibro[i].setAutor(titulo);
    cout << "Ingrese autor del libro: " << endl;
    cin>>arraylibro[i].setAutor(paginas);
    Pop(Pila *pila,Libro arraylibro[i];
    Push(Pila *pila,Libro arraylibro[i]);
    i++;
    }
    //Funcion OrdenaMisLibros, ordenando los libros por paginas en orden ascendente.
    return 0;
}
