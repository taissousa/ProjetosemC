#include <stdio.h>

int main(){

    int cod1,peca1,cod2,peca2,soma1;
    float valor1, valor2, soma2,soma3; 

    scanf("%d,%d,%.2f",cod1,peca1,valor1);
    scanf("%d,%d,%.2f",cod2,peca2,valor2);

   /* scanf("%d",&cod1);
    scanf("%d",&peca1);
    scanf("%f",&valor1);
    scanf("%d",&cod2);
    scanf("%d",&peca2);
    scanf("%f",&valor2);*/

    soma1 = (peca1*valor1);
    soma2 = (peca2*valor2);
    soma3 = soma1+soma2;

    printf("VALOR A PAGAR: R$ %.2f\n",soma3); 

return 0;
}