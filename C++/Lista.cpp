#include<iostream>
/*Vamos a hacer un programa que nos pida 4 numeros y los guarde para calcular la media*/

int main(){
    char salir;
    int num[4];
    int cont;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
      std::cout<<"Introduce el numero ",cont,":";
      std::cin >> num[cont];
      }
      //Sacamos los numeros guardados
      std::cout<<"Has metido los siguientes numeros\n";
      for(cont=0,cont<=3;cont++){
        std::cout<<num[cont];
      }

      std::cin >> salir;
