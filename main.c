#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]){
// Lectura del archivo


int c=0;
char temporal[70];


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
fgets(temporal,70,inFile);

if(c==0){
    fputs(temporal,salida);
}
if(c==1){
int pi,pf;
char aux;

pi=0;
pf=strlen(temporal)-1;
while(pi<pf){
aux=temporal[pi];
temporal[pi]=temporal[pf];
temporal[pf]=aux;
pi++; 
pf--;
}
fputs(temporal,salida);
}
if(c==2){
fputs(temporal,salida);
}
if(c==3){
char *token;
int sumatotal;
sumatotal=0;
token = strtok(temporal, " ");
if(token==NULL){
printf("NO hay token");
}
sumatotal += atoi(token);
while(token!= NULL){
token=strtok(NULL, " ");
if(token!=NULL){
sumatotal+=atoi(token);
}
}
fprintf(salida,"%d\n",sumatotal);

}
if(c==4){
fputs(temporal,salida);
}
if(c==5){

}
if(c==6){

}
c++;
}
rewind(inFile);

fclose(inFile);
fclose(salida);

    return EXIT_SUCCESS;


}
