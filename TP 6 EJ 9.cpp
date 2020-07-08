#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

/*
Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números pares que aparecen en el vector.
*/
int main (){
const int T=10;
int v[T] ={0},i,x, a, contador=0;
for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<T ;x++){
    if (v[x] %2==0){
        contador++;
        }
    }
 cout <<"LA CANTIDAD DE NUMEROS PARES ES "<< contador;
 return 0;
}
