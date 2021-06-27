#include <stdio.h>

int main(){
    char x1[4];
    int x2[4];
    float x3[4];
    double x4[4];

    printf("x declarado como char: x+1 = %d, x+2= %d, x+3 = %d \n",x1+1, x1+2, x1+3);
    printf("x declarado como int: x+1 = %d, x+2= %d, x+3 = %d \n",x2+1, x2+2, x2+3);
    printf("x declarado como float: x+1 = %d, x+2= %d, x+3 = %d \n",x3+1, x3+2, x3+3);
    printf("x declarado como double: x+1 = %d, x+2= %d, x+3 = %d \n",x4+1, x4+2, x4+3);

    return 0;
}

//x declarado como char: x+1 = 6422045, x+2= 6422046, x+3 = 6422047  
//x declarado como int: x+1 = 6422020, x+2= 6422024, x+3 = 6422028 
//x declarado como float: x+1 = 6422004, x+2= 6422008, x+3 = 6422012
//x declarado como double: x+1 = 6421976, x+2= 6421984, x+3 = 6421992
