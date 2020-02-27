#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
         longitud++;
         cont++;
    }
    return(longitud);
}


int main(){
    char *palabras[4];
    int cont,veces;
    char salir;
    char *p_aux;
    char aux[20];
    int longitud;
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
        std::cout <<"palabra "<<cont+1<<": ";
        std::cin >>aux;
        longitud=devuelve_longitud(aux);
        std::cout<<longitud;
        palabras[cont]=(char *) malloc((longitud+1)*sizeof(char));
        strcpy(palabras[cont],aux);         
    }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
        printf("%s",palabras[cont]);
    }
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    for(veces=1;veces<4;veces++){
       for(cont=0;cont<3;cont++){
          if(strcmp(palabras[cont],palabras[cont+1])>0){
             p_aux=palabras[cont];
             palabras[cont]=palabras[cont+1];
             palabras[cont+1]=p_aux;
          }
       }
    }
    std::cout<<"\nLISTA DE PALABRAS ORDENADAS:\n";
    for(cont=0;cont<4;cont++){
       printf("%s\n",palabras[cont]);
    }
    
    
    std::cin >> salir;
}
