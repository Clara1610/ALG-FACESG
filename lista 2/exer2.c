#include<stdio.h>
int main()
{
float idade,peso;
printf("Digite o numero da sua idade :");
scanf("%f",& idade);
printf("Digite o numero do seu peso :");
scanf("%f", &peso);

if(peso>110 && idade>38){
    printf("ALTO RISCO");
} else if(peso<110 && idade>38){
    printf("MEDIO RISCO");
} else if(peso>110 && idade<=38){
    printf("BAIXO RISCO");
} else{
    printf("BAIXISSIMO RISCO");
}
printf("O seu peso ideal é %f",peso);
return 0;
}
