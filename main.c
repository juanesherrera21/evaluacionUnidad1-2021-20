#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]){
// Lectura del archivo


int c=0;
char temporal[150];


FILE *inFile=fopen("fin","r");
if(inFile==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}

FILE *salida;

if((salida=fopen("salida.txt","w"))==NULL){
    
    exit(1);
}

 
while(!feof(inFile)){
fgets(temporal,150,inFile);

if(c==0){
    fputs(temporal,salida);
}
c++;
}
rewind(inFile);

fclose(inFile);
fclose(salida);

    return EXIT_SUCCESS;


}