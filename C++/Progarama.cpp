#include<iostream>
/*Un programa que lea una palabra y me devuelva la inicial*/

int main(){
    char palabra[10];
    char salir;
    int cont;
    std::cout<<"dime tu nombre:";
    std::cin >> palabra;
    std::cout<<"\nTe llamas ";
    //std::cout<<"\nLa primera palabra de tu nombre es la";
    //std::cout<<palabra[0];
    std::cout<<"\nANIMADORA:\n";
    for(cont=0;cont<=9;cont++){
        std::cout<<palabra[cont];
        std::cout<<'\n';                    
    
}
    //Contamos cauantas letras tiene tu lindo nombre
    for(cont=0;cont<=9;cont++){
        if(palabra[cont]!='\0'){
           longitud=longitud+1;
        }
           
    }
    std::cout<<"El nombre de ";                
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras";
    std::cin>> salir;
    
    std::cout<<palabra;
    std::cin >> salir;
    
}
