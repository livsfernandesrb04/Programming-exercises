#include <stdio.h>

int verificar_string(char *var1, char *var2){
    char *pont_1 = var1;
    char *pont_2 = var2;
    char *pont_ini = var1;

    while (*pont_1 != '\0')
    {
        if (*pont_1 == *pont_2)
        {
            pont_ini = pont_1;
            while (*pont_1 == *pont_2 && *pont_2 != '\0')
            {
                pont_1++;
                pont_2++;
            }
            if (*pont_2 == '\0')
            {
                return 1;
            }
            pont_2 = var2;
        }
        pont_1++;
    }
    return 0;
}

int main() {
    char var_1[101];
    char var_2[101];

    printf("Digite a primeira string: ");
    fgets(var_1, 101, stdin);
    printf("Digite a segunda string: ");
    fgets(var_2, 101, stdin);

    for(int i = 0; var_1[i] != '\0'; i++)
    {
        if (var_1[i] == '\n')
        {
            var_1[i] = '\0'
        }  
    }
    
    for(int i = 0; var_2[i] != '\0'; i++)
    {
        if (var_2[i] == '\n')
        {
            var_2[i] = '\0'
        }  
    }

    if (verificar_string(var_1, var_2) == 1) {
        printf(A segunda string foi encontrada dentro da primeira.\n);
    }
    else {
        printf(A segunda string não foi encontrada dentro da primeira.\n);
    }

    return 0;
}