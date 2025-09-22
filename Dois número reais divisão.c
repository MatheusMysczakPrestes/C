
#include<stdio.h>
#include<stdlib.h>

int main() {
    float num1, num2, divisao;
    
    printf("Informe o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);
    if(num2 != 0){
        divisao = num1 / num2;
        printf("O valor da divisão do primeiro pelo segundo é: %.2f.", divisao);
    }else{
        printf("Não é possível realizar a divisão. O segundo número é zero.");
    }
    return 0;
}