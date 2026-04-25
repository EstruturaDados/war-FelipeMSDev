#include <stdio.h>
#include <string.h>

    #define TERRITORIO 5

    typedef struct{
        char nome[50], cor[30];
        int tropas;
    } territorios;


int main(){
    
    territorios ter[TERRITORIO];
    int opcao;
    printf("Jogo War - Cadastro dos territórios\n");
    printf("Digite a opção desejada\n");
    printf("1 - Formação do MAPA\n");
    printf("2 - teste\n");
    printf("3 - Listar o mapa\n");
    printf("4 - Sair do programa\n");
    scanf("%d", &opcao);
    getchar();


    switch(opcao){
        case 1:
            printf("Formação do MAPA\n");
            
            for (int i = 1; i <= TERRITORIO; i++){
                
                printf("Território %d\n", i);
                printf("Nome: ");
                fgets(ter[i].nome, 50, stdin);
                printf("A cor é: ");
                scanf("%s", ter[i].cor);
                printf("Número de Exercitos: ");
                scanf("%d", &ter[i].tropas);
                getchar();
            }
            printf("Concluído");
            break;
        case 2:

            printf("será que deu certo?\n");
            break;
        
        case 3:
            printf("Vamos listar os Territórios\n");

            for(int i = 0; i <= TERRITORIO; i++){
                printf("Lista de Territórios");
                printf("Território %d\n", i);
                printf("Nome: %s\n", ter[i].nome);
                printf("Cor: %s\n", ter[i].cor);
                printf("tropas: %d\n", ter[i].tropas);
            }
            printf("\n");
            break;
        case 4:
            printf("--- Programa Finalizado ---");
            break;
            default: 
                printf("Escolha outra opção\n");
        }

        return 0;
}