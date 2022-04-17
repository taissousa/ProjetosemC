#include <stdio.h>
 
int main() {
 
    char nome;
    double salfixo,vendas,total;

    scanf("%s",&nome);
    scanf("%lf",&salfixo);
    scanf("%lf",&vendas);

    total = (salfixo + (vendas * 0.15));

    printf("TOTAL = R$ %.2lf\n",total);

    
    return 0;
}