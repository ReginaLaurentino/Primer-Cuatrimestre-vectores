#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/* Leer 10 números y guardarlos en un vector. Determinar e informar cual es el valor
máximo y su posición dentro del vector
*/

int main (){
int v[10] ={0},i,x, f, maximo ;

for (i=0; i<10; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<10; x++){
    cout << v[x] << endl;
        }
maximo= v[0];

for (f=1; f<10; f++){
    if(v[f] > maximo){
            maximo = v[f];
       }
}

cout <<"EL VALOR MAXIMO ES: " <<maximo;



return 0;
}
