#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main()
{
    int n;
    printf("Termino de fibonacci que se quiere calcular: ");
    scanf("%d", &n);
    int f=fib(n);
    printf("Resultado: %d", f);
}

int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int f1=fib(n-1);
    int f2=fib(n-2);
    return f1+f2;
}

