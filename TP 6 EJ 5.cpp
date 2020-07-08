#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/*Dada una lista de 20 números enteros cargarlos en un vector. Determinar e informar con
un cartel aclaratorio si el sector está ordenado estrictamente en forma creciente.
Por ejemplo: el vector (1, 3, 5, 7, 9) está ordenado estrictamente, el vector (1, 5, 3, 7) no lo
está.
*/
int main (){
const int T=10;
int v[T] ={0},i,x;
bool f=true;

for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<T; x++){
        if ( v[x] > v[x+1]){
            f=false;
            }

    }

if (f==true) {
    cout <<"ESTA ORDENADO"<< endl;
} else {
cout <<"ESTA DESORDENADO"<< endl;
}



return 0;
}
