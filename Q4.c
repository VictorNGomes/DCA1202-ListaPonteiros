int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
        /* (a) */
        valor = 10;
        p1 = &valor;
        *p1 = 20;
        printf("%d \n", valor);
        //Imprime: 20
        //Esperado pois p aponta para valor;


        /* (b) */
        temp = 26.5;
        p2 = &temp;
        *p2 = 29.0;
        printf("%.1f \n", temp);
        //imprime : 29.0
        //Esperado pois p2 aponta para temp;

        /* (c) */
        p3 = &nome[0];
        aux = *p3;
        printf("%c \n", aux);
        //imprime: P
        //Esperado pois aux recebe p3 que aponta para a posição 0  da string "Ponteiros"

        /* (d) */
        p3 = &nome[4];
        aux = *p3;
        printf("%c \n", aux);
        //imprime: e
        //Esperado, pois imprime aux recebe p3 que aponta para a 5 letra da string "Ponterios" ou seja posição 4

        /* (e) */
        p3 = nome;
        printf("%c \n", *p3);
        //Imprime: P
        //P é impresso pois p3 é um ponteiro do tipo char e armazena apenas 1 byte;

        /* (f) */
        p3 = p3 + 4;
        printf("%c \n", *p3);
        //imprime e
        //é impresso e pois p3 imcremetado +4 e desta forma é possivel "andar" na memoria até o endereço que encontrace a letra e;

        /* (g) */
        p3--;
        printf("%c \n", *p3);
        //imprime t
        // decrementou uma possição na memoria e assim acessando a letra t

        /* (h) */
        vetor[0] = 31;
        vetor[1] = 45;
        vetor[2] = 27;
        p4 = vetor;
        idade = *p4;
        printf("%d \n", idade);
        //Imprime 31
        // idade recebe o valor a qual o ponmteiro p4 aponta que por sua vez aponta para o primeiro elemento do vetor


        /* (i) */
        p5 = p4 + 1;
        idade = *p5;
        printf("%d \n", idade);
        //imprime: 45
        //idade recebe p5 que aponta para o p + 1 sendo assim andando uma posição no vetor.

        /* (j) */
        p4 = p5 + 1;
        idade = *p4;
        printf("%d \n", idade);
        //imprime: 27
        //idade recebe p4 que aponta para p5 + 1 sendo assim acessando o proximo elemento do vetor

        /* (l) */
        p4 = p4 - 2;
        idade = *p4;
        printf("%d \n", idade);
        //imprime:31
        // o o decremento de duas unidade faz com que acesse novamento o valor 31

        /* (m) */
        p5 = &vetor[2] - 1;
        printf("%d \n", *p5);
        //imprime: 45
        // p5 aponta para o endereço da terceira pocição do vetor (indice 2) porem é decrementado uma unidade, e desta forma acessa o endereço do indice anterior


        /* (n) */
        p5++;
        printf("%d \n", *p5);
        //imprime 27
        // ++ imcrementa +1 cendo assim acessado o endereço seguinte  a qual p5 aponta

return(0);
}
