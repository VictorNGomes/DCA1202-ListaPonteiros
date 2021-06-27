#include<stdlib.h>
#include<stdio.h>
//Assinatura das funções 
void imprime(int *vetor, int n);
int comparaCresente(const void *a, const void *b);


int main(){
//Declaração das variáveis 
int *lista;
int n;
    

   //Entrada dados
    printf("Entre com n:\n ");
    scanf("%d",&n);
    //Alocação de memória
    lista = malloc(n*sizeof(int));
    //Inserindo dados no Array
    for(int i=0; i<n; i++){
      scanf("%d",&lista[i]);
    }
   
    //chamada da função qsort
    qsort(lista,n, sizeof(int),comparaCresente);
    
    ////chamada da função imprime
    imprime(lista,n);

}

//void qsort(void * lista, size_t num, size_t size, int (*compare)(void,void))
    


//função para imprimir o vetor
void imprime(int *vetor, int n){
    //"for" para percorrer o vetor e imprimir cad
    for(int i=0; i<n; i++){
      printf("%d ",vetor[i]);
    }
}   

int comparaCresente(const void *a, const void *b)
{
  return *(int*)a - *(int*)b; 
//Retorna 0 se a == b
//Retorna < 0 se a < b
//retorna > 0  se b < a  
}
