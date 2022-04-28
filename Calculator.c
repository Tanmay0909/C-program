#include<stdio.h>

int main() 
{   int numint1, numint2, resint;
    float numfloat1, numfloat2, resfloat;
    double numdouble1, numdouble2, resdouble;
    printf("Enter INTEGER number\n");
    scanf("%d %d",&numint1,&numint2);
    printf("\nEnter FLOAT number");
    scanf("%f %f",&numfloat1,&numfloat2);
    printf("\nEnter DOUBLE number\n");
    scanf("%lf %lf",&numdouble1,&numdouble2);
    int val;
        printf("Enter:\n 1-addition \n 2-Substraction \n 3- Division \n 4-Multiplication \n 5-Modulus\n");
        scanf("%d",&val);
        switch (val)
        {
        case 1:
            resint = numint1 + numint2;
            resfloat = numfloat1 + numfloat2;
            resdouble = numdouble1 + numdouble2;
            printf("SUM OF INTEGER %d\n", resint);
            printf("SUM OF FLOAT %0.3f\n", resfloat);
            printf("SUM OF DOUBLE %lf\n", resdouble);
            break;
        case 2:
            resint = numint1 - numint2;
            resfloat = numfloat1 - numfloat2;
            resdouble = numdouble1 - numdouble2;
            printf("SUBTRACTION OF INTEGERS %d\n",resint);
            printf("SUBTRACTION OF FLOAT %0.3f\n", resfloat);
            printf("SUBTRACTION of double %lf\n", resdouble);
            break;
        case 3:
            resint = numint1 / numint2;
            resfloat = numfloat1 / numfloat2;
            resdouble = numdouble1 / numdouble2;
            printf("DIVIDE OF INTEFER %d \n",resint);
            printf("DIVIDE OF FLOAT %0.3f\n", resfloat);
            printf("DIVIDE OF DOUBLE %lf\n", resdouble);
               break;
        case 4:
            resint = numint1 * numint2;
            resfloat = numfloat1 * numfloat2;
            resdouble = numdouble1 * numdouble2;
            printf("MULTIPLICATION OF INTEGER %d\n", resint);
            printf("MULTIPLICATION OF FLOAT %0.3f\n", resfloat);
            printf("MULTIPLICATION OF DOUBLE %lf\n",resdouble);
            break;
        case 5:
            resint = numint1 % numint2;
            printf("MODULUS OF INTEGER %d", resint);
        
        default:
        printf("Wrong Input");
        }
                return 0;    
}