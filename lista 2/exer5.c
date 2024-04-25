#include <stdio.h> 

int main() {
    
    char sexo;
    float altura;
   
    printf("Digite o seu sexo (F/M):");
   sexo=getchar; 
   
   printf("Digitea sua altura:");
   scanf("%f",&altura);
   
   
    
    if(sexo =='m') {
        printf("Seu sexo ideal %.2f",(72.2*altura)-58);
    } else if  (sexo=='f') {
        printf( "Seu peso ideal %.2f",(62.1*altura) - 44.7);
    } else{
        printf("sexo invalido");
    }

return 0; 
    
}
