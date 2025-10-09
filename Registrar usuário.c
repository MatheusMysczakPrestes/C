#include<stdlib.h>
#include<stdio.h>

int main() {
    
    char nome[20];
    int idade, opcao;
    
    do{
    printf("\n=== MENU PRINCIPAL ===");
    printf("\n1 - Cadastrar usuário");
    printf("\n2 - Verificar usuário");
    printf("\n3 - Sair");
    printf("\n -----|============>\n");
    scanf("%i", &opcao);
    
    switch(opcao){
        
    case 1:
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("\nDigite sua idade:\n");
    scanf("%i", &idade);
    break;
    
    case 2:
    printf("Nome registrado: %s, ", nome);
    printf("Idade registrada: %i\n", idade);
    break;
    
    case 3:
    printf("saindo.....");
    break;
    
    default:
    printf("Digite uma opção válida! ");
    break;
    }
    
    
    
    
}while(opcao != 3);
}
