   /* O uso de ponteiros para funções em C serve principalmente para definir,
 em tempo de execução, qual função será executada, sem a necessidade de escrever 
 o nome da função, de forma explícita naquele ponto do código. Em geral, a definição de qual 
 função será executada é feita em um outro ponto do código, fazendo o ponteiro apontar para a função desejada.*/

 //exemplo 

 #include<stdio.h>
 #include<stdlib.h>

int Multi(int a, int b){
  return a*b;
}

 int main(){
  int (*p)(int, int); //Pode apontar para qualquer função que receba dois parametros inteiros
  int x , y, z;
  scanf("%d %d", &x, &y);

  p = Multi; //aponta para a função Multi 

  z = p(x,y); 

  printf("%d",z);

   return 0;
 }