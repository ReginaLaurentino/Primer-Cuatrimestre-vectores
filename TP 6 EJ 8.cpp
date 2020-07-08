#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

/*
Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar la cantidad de veces que ese número aparece en el vector.
*/
int main (){
    const int T=10;
int v[T] ={0},i, x, a, contador=0;
for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}
cout <<"----------------------------------------------------------"<<endl;
cout <<"INGRESE OTRO NUMERO:" ;
cin >> a;

for (x=0; x<T ; x++){
    if (v[x]==a){
       contador++;
    }

}

cout <<"El numero aparece en el vector " <<contador << " VECES"<< endl;






return 0;
}
