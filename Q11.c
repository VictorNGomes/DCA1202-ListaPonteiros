#include <stdio.h>
#include <stdlib.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    

    aloha[2] = value;
    scanf("%f", &aloha);  //INVÁLIDO 
    aloha = value; // INVÁLIDO aloha é um vetor precisa indicar o indice
    printf("%f", aloha[0]);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha; // INVÁLIDO, aloha somente retorna o endereço do primeiro indice do vetor,  e matriz falta especificar coluna
    pf = value; // INVÁLIDO pf deve receber endereço de memoria
    pf = aloha;
return 0;

}