#include <stdio.h>
#include <stdlib.h>

void ordena(int *vetor, int n){
  int aux = 0;
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n;j++)
    {
      if(vetor[i]<vetor[j]){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux; 

      }
  }
} 
}
int main(){

    int *lista;
    int n;
    printf("Entre com n:\n ");
    scanf("%d",&n);

    lista = malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
      scanf("%d",&lista[i]);
    }
    ordena(lista,n);

    for(int i=0; i<n; i++){
      printf("%d ",lista[i]);
    }

    free(lista);

    return 0;
    
}



