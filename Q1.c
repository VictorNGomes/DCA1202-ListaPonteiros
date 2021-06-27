
#include <stdio.h>

int main(){

    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    p == &i;  //True
    int x = *p - *q;
    printf("%d\n",x); //  3 - 5 = -2

    printf("%d\n",**&p); //& = 3 *& referencia e **& referencia novamente 



    int y = (3 - *p/(*q) + 7);// = 10, pois *p/*q = 0,6 porem são INT portando 3 - 0  + 7 = 10

    printf("%d\n",y);

    return 0;
}
