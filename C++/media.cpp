#include<iostream>
//Programa que pida x xnumeros y los guarde para calcular la media
int main(){
    char salir;
    int num[4];
    int cont;
    float suma_numero;
    float media;
//Introducimos numeros vector
    for (cont=0;cont<=3;cont++){
    std::cout<<"Introduce el numero ",cont,":";
    std::cin>>num[cont];
}
//Sacar numeros guardados
    std::cout<<"Has metido los siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
       std::cout<<num[cont];
       }
       //Calculamos la media
       std::cout<<"media\n";
       suma_numero=0;
       for(cont=0;cont<=3;cont++){
         suma_numero=suma_numero+num[cont];//suma acumulada
       }
       std::cout<<"la suma vale: ";
       std::cout<< suma_numero;
       media=suma_numero/4;
       std::cout<<"La media vale: ";
       std::cout<< media;
       //Mostramos la listaa en orden inverso
       for (cont=3;cont>=0;cont++){
         std::cout<<num[cont];
       }
       std::cin >> salir;
       
}
                                             
