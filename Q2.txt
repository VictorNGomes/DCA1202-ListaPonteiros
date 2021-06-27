#include <stdio.h>

int main(){

int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);



return 0;
}

Assumnido que i ocupa o endereço 4094. Imprimir p em hexadecimal (%x) resultará em: ffe

*p+2 = Imprimirá o valor que p aponta e somará 2. 5 + 2 = 7

**&p imprimirá  5. &p = endereço de p, *&p desreferencia sendo assim pegando p == i, **&p acessa o valor para qual p aponta, neste caso 5.

3**p = multiplica *p por 3 = 15

**&p+4 = soma 4 com 5 = 9
