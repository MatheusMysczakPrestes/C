
#include<stdio.h>
#include<stdlib.h>

int main() {
  float num1, num2;
  
  printf("Informe um número: ");
  scanf("%f", &num1);
  printf("Digite outro número: ");
  scanf("%f", &num2);
  if(num1 > 0 && num2 > 0){
      printf("Valores são válidos!");
  } else {
      printf("Valores inválidos!");
  }
  return 0;
}