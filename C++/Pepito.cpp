#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct Amigo{
           int n_amigo;
           float dinero;
    };
    Amigo pepito;//Guardo memoria para un dato de tipo Amigo
    std::cout<<"Dime tu numero, pepito: ";
    std::cin>>pepito.n_amigo;
    std::cout<<"Dime cuanta pasta tienes: ";
    std::cin>>pepito.dinero;
    //Recupero datos de Amigo pepito.
    std::cout<<"Yo tengo un amigo que se llama pepito";
    std::cout<<"\nPepito es mi amigo nº"<<pepito.n_amigo;
    std::cout<<"\ny tiene "<<pepito.dinero<<" euros.";
}
