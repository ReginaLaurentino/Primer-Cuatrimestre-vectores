#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
/*Dada una lista de 20 números cargarlos en un vector. Determinar e informar la cantidad
de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. Ejemplo:
el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas
*/
int main (){
const int T=20;
int v[T] ={0},i,con=0, x;
for (i=0; i<T; i++){
    cout <<"INGRESAR UN NUMERO: ";
    cin >> v[i];
}

for (x=0; x<T; x++){
    if (v[x] >= v[x+1]){
        con++;
        }

}
cout <<"LA CANTIDAD DE RUPTURAS QUE HUBO SON " <<con<<endl;







return 0;
}
