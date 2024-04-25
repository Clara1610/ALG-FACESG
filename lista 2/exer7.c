#include <stdio.h>

int main()
{
   float salario;
   int codigo;
   
   printf("Digite seu salario:");
   scanf("%f",&salario);
   printf("Insira um codigo:");
   scanf("%d",&codigo);
   
    switch(codigo){
    case 1:
    printf("Seu nivel é excelente %.2f ",salario*2);
    break;
    case 2:
    printf("Seu nivel é bom %.2f", (salario) + salario*0.80);
    break;
    case 3:
    printf("Seu nivel é medio %.2f",(salario) + salario*0.5);
    break;
    case 4 :
    printf("Seu nivel é regular %.2f", (salario)+salario*0.3);
    case 5:
    printf("Seu nivel é preciso treinar mais %.2f",(salario)+salario*0.1);
    case 6:
    printf("Seu nivel é te cuida %.2f",(salario)+salario*0.05);
    break;
    case 7:
    printf("Passe no departamento pessoal ");
    break;
    default:
    printf("COLOQUE OS CODIGOS DE 0 ATÉ 7");
}
    return 0;
}

