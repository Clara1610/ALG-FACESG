#include <stdio.h> 

int main() {
    
    float total_maca,maca_compradas;
    
    printf("Digite o seu nuemro de maçãs compradas:");
    scanf("%f",&maca_compradas);
    
    if(maca_compradas<0.30){
        total_maca= maca_compradas*0.30;
    }else{
        total_maca=maca_compradas*0.25;
    }
    
    printf("O total de maçãs :R$ %.2f",total_maca);

return 0; 
    
}
