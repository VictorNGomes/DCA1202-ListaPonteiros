#include<stdio.h>

int main(void){

int mat[] = {1,8,3,4};
int *p,x;

    p = mat + 1 ; //OPERAÇÃO VALIDA; p recebe o endereço de memoria da pocição 2 do vetor
    p = mat++; /*OPERAÇÃO INVALIDA; p recebe mat = mat + 1 sendo que mat não recebe atribuição
                pois é um vetor */

    p = ++mat;//OPERAÇÃO INVALIDA;  pois mat é um vetor, seria necessario informar o indice

    x = (*mat)++;// OPERAÇÃO VALIDA POREM NÃO SURTE EFEITO ALGUM.
