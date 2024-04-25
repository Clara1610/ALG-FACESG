#include <stdio.h> 

int main() {
    
    int cod;
    
    printf("Digite o codigo do produto:");
    scanf("%d",&cod);
    
    switch(cod){
    case 1:
    printf("Sul");
    case 2:
    printf("Sudeste");
    case 3:
    printf("Centro-Oeste");
    break;
    case 4:
    printf("Nordeste");
    case 5:
    printf("Norte");
    break;
    default:
    printf("Importado");
    break;
    
} return 0; 
    
}
