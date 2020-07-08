#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/*Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por
pantalla los valores que son mayores al promedio.
*/
int main (){

int v[10] ={0},i,x, f, promedio=0 ;

for (i=0; i<10; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<10; x++){
    cout << v[x] << endl;
    promedio+= v[x];
        }
 promedio= promedio/10;

 for (f=0; f<10; f++){
    if (v[f]>promedio){
        cout <<"VALOR MAYOR AL PROMEDIO:" <<v[f]<< endl;
    }

 }








return 0;
}
