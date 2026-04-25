#include <stdio.h>

struct Produto {
    int codigo;
    char nome[50];
};

int main() {
    struct Produto p;

    printf("1. Digite o código do produto: ");
    scanf("%d", &p.codigo);

    // --- A LIMPEZA ACONTECE AQUI ---
    // O scanf deixou um '\n' (Enter) no buffer. 
    // O getchar() vai "capturar" esse Enter para ele não atrapalhar o fgets.
    getchar(); 
    // -------------------------------

    printf("2. Digite o nome do produto: ");
    fgets(p.nome, 50, stdin);

    printf("\n--- Dados Cadastrados ---\n");
    printf("Código: %d\n", p.codigo);
    printf("Nome: %s", p.nome);

    return 0;
}
