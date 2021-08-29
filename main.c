#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	
	feature1(argv[1],argv[2]);
	
	feature2(argv[1],argv[2]);
	
	feature3(argv[1],argv[2]);
//feature 5	
// Lectura del archivo


int c=0;
char temporal[70];


FILE *inFile=fopen(argv[1],"r");
if(inFile==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}

FILE *salida;

if((salida=fopen(argv[2],"w"))==NULL){
    
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
int contadornum=0;
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
char *token;
int sumatotal;

int mayor=0;
int menor=0;

int contadornum;
sumatotal=0;
char operacion[20];
token = strtok(temporal, " ");
if(token==NULL){
printf("NO hay token");
}
sumatotal += atoi(token);
while(token!= NULL){
token=strtok(NULL, " ");
if(token!=NULL){
sumatotal+=atoi(token);
if(atoi(token)>mayor){
mayor=atoi(token);
}
if(atoi(token)<menor){
menor=atoi(token);
}
strcpy(operacion,token);
contadornum++;
}

}


//comparar

char cadena1[20]="avg";
char cadena2[20]="max";
char cadena3[20]="min";

if(strcmp(operacion,cadena1)==10){

int promedio=sumatotal/contadornum;
fprintf(salida,"%d\n",promedio);
}

if(strcmp(operacion,cadena2)==10){
fprintf(salida,"%d\n",mayor);
}

if(strcmp(operacion,cadena3)==10){
fprintf(salida,"%d\n",menor);
}

}
c++;
}

//DEFINIMOS ESTRUCTURA
struct Obj_t c1;

feature6(argv[1],&c1);

feature7(salida,&c1);

fclose(inFile);
fclose(salida);


return EXIT_SUCCESS;	
	
	}
	

