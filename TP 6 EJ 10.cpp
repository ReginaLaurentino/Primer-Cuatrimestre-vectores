#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/*
Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números primos que aparecen en el vector.
*/
int main (){
const int T=10;
int v[T] ={0},i,x, a, contador=0, cantprimos=0;
for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<T; x++){

    for (a=0; a<v[x]; a++){
        if (v[x] % a ==0){
            contador++;
        }
    }
    if (contador==2){
        cantprimos++;
    }
 contador=0;
}


cout <<"LA CANTIDAD DE PRIMOS ES: " << cantprimos;




return 0;
}
