#include<stdio.h>

main()
{
    int tempocasado;
    char sexo = 'm';

    printf("Digite o sexo da pessoa: ");
    fflush(stdin);
    sexo = getchar();

    printf("Digite o tempo de casado desta pessoa: ");
    scanf("%d", & tempocasado);

    if (sexo = 'f')
    {
        printf("Esta pessoa tem %d anos de casada", tempocasado);
    }
}