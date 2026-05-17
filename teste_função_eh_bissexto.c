#include <stdio.h>
#include <assert.h>


int main()
{
    
    int ano;
    // Entrada do ano
    printf("Digite um ano: ");
    assert(scanf("%d", &ano)== 1);
    
    assert(ano>0);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("O ano %d é BISSEXTO.\n", ano);
    } else {
    printf("O ano %d não é bissexto.\n", ano);
    }
    return 0;
}