int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i);
printf(" vet[%d] = %.1f",i, vet[i]);
printf("*(f + %d) = %.1f",i, *(f+i));
printf("&vet[%d] = %X",i, &vet[i]);
printf("(f + %d) = %X",i, f+i);
}
}
/*
Para i = 0
    printf("\ni = %d",i); Imprime o indice do vetor
    printf(" vet[%d] = %.1f",i, vet[i]); Imprime a posição do vetor e o valor que se encontra ali.
    printf("*(f + %d) = %.1f",i, *(f+i)); Imprime o valor que encontra-se na pocição resutante quando é incrementado +i. 
                                          Como é o primero laço do for i =0 portando é impresso o valor do primeiro elemento 
                                          do vetor a qual f aponta.
    printf("&vet[%d] = %X",i, &vet[i]); Imprime o endereço de memoria do indice i(neste caso 0) do vetor.
    printf("(f + %d) = %X",i, f+i); imprime o endereço de memoria imcrementando i.
                                          

i = 1
    printf("\ni = %d",i); Imprime o indice do vetor
    printf(" vet[%d] = %.1f",i, vet[i]); Imprime a posição do vetor e o valor que se encontra ali.
    printf("*(f + %d) = %.1f",i, *(f+i)); Imprime o valor que encontra-se na pocição resutante quando é incrementado +i. 
    printf("&vet[%d] = %X",i, &vet[i]); Imprime o endereço de memoria do indice i(neste caso 1) do vetor.
    printf("(f + %d) = %X",i, f+i); imprime o endereço de memoria imcrementando i.
    


i = 2 
    printf("\ni = %d",i); Imprime o indice do vetor
    printf(" vet[%d] = %.1f",i, vet[i]); Imprime a posição do vetor e o valor que se encontra ali.
    printf("*(f + %d) = %.1f",i, *(f+i)); Imprime o valor que encontra-se na pocição resutante quando é incrementado +i. 
    printf("&vet[%d] = %X",i, &vet[i]); Imprime o endereço de memoria do indice i(neste caso 2) do vetor.
    printf("(f + %d) = %X",i, f+i); imprime o endereço de memoria imcrementando i.


i = 3 
    printf("\ni = %d",i); Imprime o indice do vetor
    printf(" vet[%d] = %.1f",i, vet[i]); Imprime a posição do vetor e o valor que se encontra ali.
    printf("*(f + %d) = %.1f",i, *(f+i)); Imprime o valor que encontra-se na pocição resutante quando é incrementado +i. 
    printf("&vet[%d] = %X",i, &vet[i]); Imprime o endereço de memoria do indice i(neste caso 3) do vetor.
    printf("(f + %d) = %X",i, f+i); imprime o endereço de memoria imcrementando i.


i = 4 
    printf("\ni = %d",i); Imprime o indice do vetor
    printf(" vet[%d] = %.1f",i, vet[i]); Imprime a posição do vetor e o valor que se encontra ali.
    printf("*(f + %d) = %.1f",i, *(f+i)); Imprime o valor que encontra-se na pocição resutante quando é incrementado +i. 
    printf("&vet[%d] = %X",i, &vet[i]); Imprime o endereço de memoria do indice i(neste caso 4) do vetor.
    printf("(f + %d) = %X",i, f+i); imprime o endereço de memoria imcrementando i.
