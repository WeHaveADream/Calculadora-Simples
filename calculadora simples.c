#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2 , res;
    int opc;

    do{

        printf("\n1 - soma");
        printf("\n2 - subtrai");
        printf("\n3 - divide");
        printf("\n4 - multiplica\n");
        printf("\n5 - sair\n");

        printf("-> ");
        scanf("%d", &opc);


        switch(opc){


            case 1:
                printf("digite o primeiro num: ");
                fflush(stdin);
                scanf("%d", &num1);

                printf("digite o segundo num: ");
                fflush(stdin);
                scanf("%d", &num2);

                res = num1 + num2;

                printf("\nresultado: %d\n\n", res);


                break;

            case 2:
                printf("digite o primeiro num: ");
                fflush(stdin);
                scanf("%d", &num1);

                printf("digite o segundo num: ");
                fflush(stdin);
                scanf("%d", &num2);

                res = num1 - num2;

                printf("\nresultado: %d\n\n", res);


                break;

            case 3:
                printf("digite o primeiro num: ");
                fflush(stdin);
                scanf("%d", &num1);

                printf("digite o segundo num: ");
                fflush(stdin);
                scanf("%d", &num2);

                if(num2 == 0){
                    printf("\nzero nao divide\n");
                    break;
                }

                res = num1 / num2;

                printf("\nresultado: %d\n\n", res);


                break;

            case 4:
                printf("digite o primeiro num: ");
                fflush(stdin);
                scanf("%d", &num1);

                printf("digite o segundo num: ");
                fflush(stdin);
                scanf("%d", &num2);

                res = num1 * num2;

                printf("\nresultado: %d\n\n", res);


                break;

            case 5:
                printf("\n saindo \n\n");


        }
    }while(opc != 5);



    return 0;
}
