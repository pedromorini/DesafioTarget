#include <stdio.h>
#include <math.h>


int quadradoPerfeito(int numero){
    
    int primeiraExpressao = 5 * (numero * numero) + 4;
    int segundaExpressao = 5 * (numero * numero) - 4;
    
    int primeiraRaiz = sqrt(primeiraExpressao);
    int segundaRaiz = sqrt(segundaExpressao);
    
    if(primeiraExpressao == (primeiraRaiz * primeiraRaiz) || segundaExpressao == (segundaRaiz * segundaRaiz)){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int numero = 55;
    
    printf("Numero: %d, %d\n", numero, quadradoPerfeito(numero));

    return 0;
}
