#include <stdio.h>

float calcular_media(float nota1, float nota2, float nota3, char media){
    float media_final;

    switch (media)
    { case 'A': media_final = (nota1 + nota2 + nota3)/ 3; break;case 'P': media_final = (nota1 * 5 + nota2 * 3 + nota3 * 2)/ 10; break;
    case 'H': media_final = 3 / ((1 / nota1) +(1 / nota2)  + (1 / nota3)); break;
    default: printf("Resultado inválido.\n");return -1;
    }

    return media_final;
}

int main(){
    float nota1, nota2, nota3;
    char media;

    printf("Insira as notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite o tipo de média que deseja obter(A - aritmética, P - ponderada, H - harmônica): ");
    scanf(" %c", &media);

    printf("A média é: %.2f\n", calcular_media(nota1, nota2, nota3, media));
    
    return 0;
}