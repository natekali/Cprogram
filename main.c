#include <stdio.h>

int main() {
    int max_val, t1, t2, nextTerm;

    printf("Entrez le premier nombre de la suite de Fibonacci: ");
    scanf("%d", &t1);

    t2 = t1;

    printf("Entrez la valeur maximale a ne pas depasser : ");
    scanf("%d", &max_val);

    printf("\nSuite de Fibonacci a partir de %d: ", t1);

    printf("%d, %d", t1, t2);

    nextTerm = t1 + t2;
    while (nextTerm <= max_val) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\nLa valeur maximale atteinte est : %d\n", t2);

    if (max_val % 2 == 0) {
        printf("La valeur maximale est paire.\n");
    } else {
        printf("La valeur maximale est impaire.\n");
    }

    if (max_val % 3 == 0) {
        printf("La valeur maximale est un multiple de 3.\n");
    } else {
        printf("La valeur maximale n'est pas un multiple de 3.\n");
    }

    return 0;
}