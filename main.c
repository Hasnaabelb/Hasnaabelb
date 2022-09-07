#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A ,B ,S ,P ,difference ,division ;
    int reste;
    printf("Veuillez entrer la valeur de A : ");
    scanf(" %d",&A);
    printf("Veuillez entrer la valeur de B : ");
    scanf(" %d",&B);
    S = A+B;
    P = A*B;
    difference = A-B;
    division = A/B;
    reste = A % B;
    printf("la somme de A et B est : %d\n",S);
    printf("le produit de A et B est: %d\n",P);
    printf("la difference de A et B est : %d\n",difference);
    printf("la division de A et B est : %d\n",division);
    printf("le reste de A et B est : %d",reste);
    return 0;
}
