#include <stdio.h>

int main() {
    int opcao;

    printf("Menu lista 3 : \n"
        "Exercicio 1\n\n"
        "Exercicio 2\n"
        "Exercicio 3\n"
        "Exercicio 4\n"
        "Exercicio 5\n"
        "DIGITO '0' - SAIR\n");

    printf("\nINFORME UM NUMERO DO MENU: ");
    scanf("%d", & opcao);
    while (opcao != 0) {
        switch (opcao) {
            case 1: {
                char txt[20];

                printf("Digite um texto de 20 caracteres:\n");
                gets(txt);

                int caractere = 0;

                while (txt[caractere] != '\0') {
                    caractere++;
                }
                printf("Esse texto %s possui %i caracteres", txt, caractere);
                break;
            }
            case 2: {
                char text5[100];
                char text6[100];
                printf("Digite um texto ate 100 caracteres: ");
                gets(text5);
                int i = 0;
                for (i = 0; i < sizeof(text5) && text5[i] != '\0'; i++) {}
                printf("%s", text6);
                break;
            }

        }
    }
    return 0;
}
