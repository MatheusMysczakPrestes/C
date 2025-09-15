#include<stdio.h>
//#include<stdlib.h>
 
 int main(){
     char nome[20];
     int idade;
     float altura;
     
     printf("Informe o seu nome: ");
     scanf("%s", &nome);
     printf("Informe a sua idade: ");
     scanf("%i", &idade);
     printf("Informe a sua altura: ");
     scanf("%f", &altura);
     
     printf( "Seu nome é %s, sua idade é %i e sua altura é %.0f", nome, idade, altura );
 }
