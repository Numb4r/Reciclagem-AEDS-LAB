#include <stdlib.h>
#include <stdio.h>

int fatorial_recursivo(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fatorial_recursivo(n - 1);
}
int fatorial(int n)
{

    for (int i = n - 1; i > 1; i--)
    {
        n *= i;
    }
    return n;
}
int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Entre com o valor para se fazer o fatorial: ");
    scanf("%d", &n);
    printf("Fatorial: %d", fatorial(n));
    printf("\nFatorial recursivo: %d", fatorial_recursivo(n));

    return 0;
}
