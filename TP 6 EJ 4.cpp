#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

/*
Dada una lista de 10 n�meros cargarlos en un vector. Luego intercambiar en el vector el
n�mero en la posici�n 0 con el n�mero en la posici�n 9.
*/

int main (){
int v[10] ={0},i,x, f,h ;

for (i=0; i<10; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}
for (x=0; x<10; x++){
    cout << v[x] << endl;
           }
f= v[9];
v[9]= v[0];
v[0]= f;
cout << "--------------------------------------------------------"<< endl;
for (h=0; h<10; h++){
    cout << v[h] << endl;
           }





return 0;
}
