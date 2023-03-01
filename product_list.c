// CONSIGNE DE L'EXERCICE
// Creez un programme qui :
// 1 prend pour input "Titre", "Prix /u", "Quantité"
// 2 apres avoir rentré ces informations, le programme vous demande
// si vous souhaitez continuer
// Si oui : Retournez a l'etape 1
// Si non, le programme affiche l'ensemble des lignes rentrées
// précédement dans un format "tableau"
// ex : "| Mon super titre | 4 €/u | 45 | 180 | ~135€ |"
// plus une ligne de total, affichant la somme des prix susmentionnés
// ex : "|TOTAL| | | 180 € | ~135€|"

#include <stdio.h>
#include <string.h>

//limite de produits a 100
#define MAX_PRODUCTS 100

//structure regroupant les 3 propriétés de l'article
struct Product {
    char title[100];
    float price;
    int quantity;
};

int main() {
    struct Product products[MAX_PRODUCTS];
    int num_products = 0;
    char answer[10];

    do {
        //demande à l'utilisateur de rentrer les informations d'un (nouveau) produit
        printf("\nEntrez le titre du produit :");
        scanf("%s", products[num_products].title);
        printf("Entrez le prix du produit :");
        scanf("%f", &products[num_products].price);
        printf("Entrez la quantite du produit :");
        scanf("%d", &products[num_products].quantity);

        num_products++;

        //demande à l'utilisateur s'il veut continuer à ajouter des produits
        printf("Autre produit ?(oui/non):");
        scanf("%s", answer);
    } while (strcmp(answer, "oui") == 0);
    //si oui, recommencer

    //si non, affichage du tableau des produits
    printf("\n\nTitre\t\tPrix\t\tQuantite\tTotal\n");
    float total = 0;
    for (int i = 0; i < num_products; i++) {
        printf("%s\t\t%.0f $\t\t%d\n", products[i].title, products[i].price, products[i].quantity);
        total += products[i].price * products[i].quantity;
    }
    printf("Total\t\t\t\t\t\t%.0f $\n", total);
    return 0;
}