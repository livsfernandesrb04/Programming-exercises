#include <stdio.h>

 int main() {

    int voto, candidato1, candidato2, candidato3, nulos, brancos, votos_total; 
    float por_nulos, por_brancos;

    //Apresentar as opções de voto e ler o voto
    do {
        printf("1.Candidata Amelia Silva \n2.Candidata Juliana Souza \n3.Candidato Fernando Perez \n4.Nulo \n5.Branco \n");
        printf("Insira o seu voto: \n");
        scanf("%d", &voto);
    } while(voto < 0 || voto > 5 );

    while (voto != 0)
    {
        if(voto == 1)
        {
            candidato1++;
        }
        else if(voto == 2)
        {
            candidato2++;
        }
        else if(voto == 3)
        {
            candidato3++;
        }
        else if(voto == 4)
        {
            nulos++;
        }
        else if(voto == 5)
        {
            brancos++;
        }
    }

    //Quando o número zero for inserido deve apresentar:
    if (voto == 0)
    {
        //Numero de votos de cada candidato
        printf("Candidata Amelia Silva: %d\nCandidata Juliana Souza: %d\nCandidato Fernando Perez: %d\n", candidato1, candidato2, candidato3);

        votos_total = candidato1 + candidato2 + candidato3 + nulos + brancos;

        //porcentagem de votos nulos
        por_nulos = ((float)nulos / (float)votos_total) * 100;
        printf("A porcentagem de votos nulos foi de %.2f", por_nulos);

        //porcentagem de votos brancos
        por_brancos = ((float)brancos / (float)votos_total) * 100;
        printf("A porcentagem de votos brancos foi de %.2f", por_brancos);

        //candidato vencedor
        if (candidato1 > candidato2 && candidato1 > candidato3)
        {
            printf("A candidata vencedora é Amelia Silva");
        }
        else if (candidato2 > candidato1 && candidato2 > candidato3)
        {
            printf("A candidata vencedora é Juliana Souza");
        }
        else if (candidato3 > candidato2 && candidato3 > candidato1)
        {
            printf("O candidato vencedor é Fernando Perez");
        }
        
    }
    
    return 0;
 }