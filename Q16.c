#include <stdio.h>
#include <stdlib.h>
#include "questoes.h" //biblioteca criada para questão 15
#include <time.h> 

//Assinatura da função auxiliar da qsort
int comparaCresente(const void *a, const void *b);



int main(){
    //criando variáveis do tipo clock
    clock_t t1,t2;
    
    //Declaração das variáveis 
    int *lista,*lista2;
    int n;
    
    //Entrada dados
    printf("Entre com n:\n ");
    scanf("%d",&n);
    
    //Alocação de memória
    lista = malloc(n*sizeof(int));
    lista2 = malloc(n*sizeof(int));
    
    //Inserindo dados no Array
    for(int i=0; i<n; i++){
      scanf("%d",&lista[i]);
      lista2[i] = lista[i];
    }
    
    //Valor do clock inicial
    t1 = clock();
    
    //chamada da função cvsort
    cvSort(lista,n, sizeof(int),compara);
    
    //Valor do clock após a execução da função
    t1 = clock() - t1;
    printf("\nTempo de execucao(cvsort): %lf", ((double)t1)/((CLOCKS_PER_SEC/1000)));
    
    //Valor do clock antes da execução da função
    t2 = clock();
    //chamada da função qsort
    qsort(lista,n, sizeof(int),comparaCresente);
    
    //Valor do clock após a execução da função
    t2 = clock() - t2;
    printf("\nTempo de execucao(qsort): %lf", ((double)t2)/((CLOCKS_PER_SEC/1000)));
    
    //Liberação da memória alocada
    free(lista2);
    free(lista);
}

  
int comparaCresente(const void *a, const void *b)
{
  return *(int*)a - *(int*)b; 
//Retorna 0 se a == b
//Retorna < 0 se a < b
//retorna > 0  se b < a  
}