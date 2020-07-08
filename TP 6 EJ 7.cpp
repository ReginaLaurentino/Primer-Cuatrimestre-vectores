#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/*
Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se
mostrará el valor índice igual a -1.
*/
int main (){
const int T=10;
int v[T] ={0},i, x, a, indice;
bool bandera=false;
for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}
cout <<"----------------------------------------------------------"<<endl;
cout <<"INGRESE OTRO NUMERO:" <<endl;
cin >> a;

for (x=0; x<T ; x++){
    if (v[x]==a){
        indice= v[x];
        bandera=true;
    }

}

if (bandera==true) {
    cout <<"EL INDICE DONDE APARECE EL VALOR POR PRIMERA VEZ ES: "<< indice<< endl;
    } else {
    cout <<"-1"<< endl;
    }






return 0;
}
