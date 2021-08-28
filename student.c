#include <stdlib.h>
#include "student.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

//FEATURE1
void feature1(FILE *fin, FILE *fout){
int c=0;
char temporal[70];


fin=fopen(fin,"r");
if(fin==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}


if((fout=fopen(fout,"w"))==NULL){
    
    exit(1);
}

 
while(!feof(fin)){
fgets(temporal,70,fin);

if(c==0){
    fputs(temporal,fout);
}
c++;
}
    
}
//FEATURE 2
void feature2(FILE *fin, FILE *fout){
int c=0;
char temporal[70];


fin=fopen(fin,"r");
if(fin==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}


if((fout=fopen(fout,"w"))==NULL){
    
    exit(1);
}

 
while(!feof(fin)){
fgets(temporal,70,fin);

if(c==0){
    fputs(temporal,fout);
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
fputs(temporal,fout);
}
c++;
}
  }
  //FEATURE 3
void feature3(FILE *fin, FILE *fout){
int c=0;
char temporal[70];


fin=fopen(fin,"r");
if(fin==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}


if((fout=fopen(fout,"w"))==NULL){
    
    exit(1);
}

 
while(!feof(fin)){
fgets(temporal,70,fin);
if(c==0){
    fputs(temporal,fout);
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
fputs(temporal,fout);
}
if(c==2){
fputs(temporal,fout);
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
fprintf(fout,"%d\n",sumatotal);

}
c++;
}
}


void feature6(FILE *fin, struct Obj_t *pobj){
int g=0;
int c=0;
char temporal[70];
char nombre[20];
int numero;
fin=fopen(fin,"r");
if(fin==NULL){
    perror("Error en la apertura del archivo");
    return (EXIT_FAILURE);
}


 
while(!feof(fin)){
fgets(temporal,70,fin);
printf("cade: %s\n",temporal);
if(c==5){
char *token;
token = strtok(temporal, ",");

if(token!=NULL){
while(token != NULL)
{if(g==0){
printf("cadena: %s\n: ",token);
strcpy(nombre,token);

g++;
}else{
printf("cadena: %s\n: ",token);
numero=atoi(token);
break;
 }


token=strtok(NULL,",");
}
}
g=0;
printf("sss: %s\n",nombre);
printf("sss: %d\n",numero);

pobj->nombre=nombre;
pobj->cedula=numero;

//estructutra:
printf("nombre: %s",pobj->nombre);
printf("cedula: %d",pobj->cedula);
}
c++;
}


}



