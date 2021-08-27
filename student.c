#include <stdlib.h>
#include "student.h"
//FEATURE1
void feature1(FILE *fin, FILE *fout){
int c=0;
char temporal[70];


fin=fopen("fin","r");
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


fin=fopen("fin","r");
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
