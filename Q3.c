#include <stdio.h>

int main(){
int i = 5, j = 8 ;
int *p, *q;

p = &i;
q = &j;
p = i;  // p recebe o que i armazena.
q = &j; //OK endereço de j
p = &*&i;// endereço de i
i = (*&)j; // ILEGAL parenteses
i = *&j; //recebe o que j armazena
i = *&*&j; //recebe oq j armazena

q = *p; // ilegal ponteiro recebe ponteiro

i = (*p)++ + *q; //assumindo que p e q estão apontando para alguma variável com valores declarados está operação realizará a soma.




return 0;
}
