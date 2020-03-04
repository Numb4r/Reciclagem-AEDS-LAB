#include <stdio.h>
#include <stdlib.h>
void menu()
{
    printf("\n\t\tMENU");
    printf("\n1.)add");
    printf("\n2.)remove");
    printf("\n3.)list");
    printf("\n0.)exit");
    printf("\n>");
}
int main(int argc, char const *argv[])
{
    int vet[5], *ptr, op = 0, numb = 0, *aux;
    ptr = vet;
    do
    {
        menu();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            if (ptr != vet + 5)
            {
                printf("Qual numero a ser inserido >");
                scanf("%d", &numb);
                *ptr = numb;
                ptr++;
            }
            else
            {

                printf("Out of range");
            }
            break;
        case 2:
            if (ptr == vet + 5)
            {
                ptr--;
            }

            printf("Removido o %d do espaco de memoria %p", *ptr, ptr);
            *ptr = 0;
            if (ptr != vet)
            {
                ptr--;
            }
            break;
        case 3:
            aux = vet;
            do
            {
                printf("%d\n", *aux);
                aux++;
            } while (aux != vet + 5);
            break;
        case 0:
            exit(1);
            break;
        default:
            break;
        }
    } while (1);

    return 0;
}
