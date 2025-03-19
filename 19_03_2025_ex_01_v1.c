 #include <stdio.h>
 #include <malloc.h>

//Escreva um programa para declarar, utilizando ALOCAÇÃO DINÂMICA DE
//MEMÓRIA, um vetor com 10 elementos DO TIPO INTEIRO, em C OU C++.
//Atribua os seguintes valores aos elementos do vetor:
//2 : 5 : 8 : 11 : 14 : 17 : 20 : 23 : 26 : 29
//Imprima os valores do vetor.
//Libere a área de memória utilizada pelo vetor.

 int main(){
    int i, j;
//    int v[10]={2, 5, 8, 11, 14, 17, 20, 23, 26, 29};
    int *x;

    x = (int *) malloc (10 *sizeof(int));

    if (x == NULL)

        printf("\t\tERRO de alocacao de memoria\n");

    else{

        for(i=0; i < 10; i++){
            x[i]=v[i];
        }
        for(i=0; i < 10; i++){
            printf("%d\n", x[i]);
        }
        free(x);

    }

    return 0;
 }