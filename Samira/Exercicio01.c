#include<stdio.h>
#include<stdlib.h>

void  soma(){

    int valor, numero;
    int contador; 
    int soma=0;
    float med=0;

    printf("Por gentileza, digite quantos numeros deseja calcular: ");
        scanf("%d", &numero);
        
        for(contador=0; contador < numero; contador++){
           printf("Por gentilzea, informe o valor: ");
           scanf("%d", valor);
           soma = valor + soma;

        }
         med = soma / numero;
        prntf("A soma eh=%d\n", soma);
        printf("A media eh= %f\n", med);
}
    int main(){

     
        soma();
    }