#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b);

void cvSort(void * vector,size_t size_vector,size_t size_of_type, int(*compara)(int,int));
  
void imprime(int *vetor, int n);

  

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
    cvSort(lista,n, sizeof(int),compara);
    
    ////chamada da função imprime
    imprime(lista,n);

}


void imprime(int *vetor, int n){
    //"for" para percorrer o vetor e imprimir cad
    for(int i=0; i<n; i++){
      printf("%d ",vetor[i]);
    }
}   


  
int compara(int a, int b){
    if(a<b){
      return 1;
    }
    else{
      return 0;
    }
}

void cvSort(void * vector, size_t size_vector, size_t size_of_type, int(*compara)(int,int)){

  
  void *a, *b;

  //b = vector + (size_of_type*j);//endereço vetor[j]
  //*(int*)a valr que esta em a
  int aux = 0;
  for(int i=0; i<size_vector;i++){
    a = vector + (size_of_type*i);
      for(int j=0; j<size_vector;j++){
        b = vector + (size_of_type*j);
      if (compara(*(int*)a,*(int*)b)){

          int *auxA = (int*)a;
          int *auxB = (int*)b;

          aux = *auxB;
          *auxB = *auxA;
          *auxA = aux; 
        }
      } 
  }  

}