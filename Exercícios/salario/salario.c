#include <stdio.h>

int main(){

    float valuehr,salary;
    int number,hour;

    scanf("%d",&number);
    scanf("%d",&hour);
    scanf("%f",&valuehr);

    salary = hour * valuehr;   

    printf("NUMBER = %d\n",number);
    printf("SALARY =  U$ %.2f\n",salary);



    return 0;
}