#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

/*
Leer 10 números y guardarlos en un vector. Determinar e informar cual es la suma de
los valores del vector.
*/
int main () {
int v[10] ={0},i, suma=0, x, f;

for (i=0; i<10; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<10; x++){
    cout << v[x] << endl;
    suma+= v[x];
    }
cout <<"LA SUMA DE LOS NUMEROS ES: " << suma<<endl;







return 0;
}
