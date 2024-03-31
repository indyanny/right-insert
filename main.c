#include <stdio.h>
#include <stdlib.h>

int main(){
    struct no{
        int dado;
        struct no *prox;
    };

    struct no *lista, *p, *q;
    int sn;

    lista = NULL;

    do{
        if(lista == NULL){
            p = malloc(sizeof(struct no));
            printf("Digite o dado a inserir na lista:");
            scanf("%d", &p->dado);
            p->prox = lista;
            lista = p;
        }
        else{
            p = malloc(sizeof(struct no));
            printf("Digite o dado a inserir na lista:");
            scanf("%d", &p->dado);
            p->prox = NULL;
            q = lista;
            while(q->prox != NULL){
                q = q->prox;
            }
            q->prox = p;
        }

        printf("Deseja inserir outro no a direita? 0-nao 1-sim:");
        scanf("%d", &sn);

    }
    while(sn ==1);

    printf("\n\n");
    p = lista;
    while(p != NULL){
        printf("%d  ", p->dado);
        p = p->prox;
    }

    return 0;
}