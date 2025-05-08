#include<stdio.h>

main()
{
    int n1, n2, soma=0;

    printf("Digite numero para soma: ");
    scanf("%d", & n1);
    
    printf("Digite numero para soma: ");
    scanf("%d", & n2);

    soma = n1 + n2;

    if (soma >= 10)
    {
        printf("Resultado da soma = %d", soma);
    }
}