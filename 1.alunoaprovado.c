#include<stdio.h>

main()
{
    float nota, somanotas, media=0, i;

    for (i=0; i<3; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", & nota);
        somanotas += nota;
    }

    media = somanotas / 3;

    printf("A media deste aluno e %0.2f", media);
}