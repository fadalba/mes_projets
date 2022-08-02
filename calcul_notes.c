#include <stdio.h>
#include <stdlib.h>

int main()
{
    double noteMath[2],notepc[2],notesvt[2]; // on choisit 3 matières et on cré un tableau pour chaque matière car chacune contenant 2 notes
    char nom[50];  // tableau de nom qui peut prendre 50 caractères
    double moy,total, coef, Moymath, Moypc, Moysvt; // on déclare les variables dont on a besoins
    int i = 0;                                // on déclare un compteur de type int pour parcourir les indices du tableau
    double tmath = 0, tpc = 0, tsvt= 0; // on initialise les notes 
    int coefmath = 5, coefpc = 6, coefsvt = 6;  // on attribue les coefficients des matières
    coef = coefmath + coefpc + coefsvt; // on pose une formule de calcul pour additionner les coefficients

    printf("Bonjour cher apprenant,donnez votre nom\n"); // on demande à l'apprenant de saisir son nom
    scanf("%s", nom); // on récupère la valeur saisie

    for (i = 0; i < 2; i++) // on cré une boucle pour parcourir le tableau 

    {
        printf("%s Entrez vos note en math[%d] :\n", nom,i+1); // on a la foction d'affichage pour le 
        scanf("%lf", &noteMath[i]);
    
        tmath += noteMath[i]; // cumul des notes en maths
    }

    Moymath = tmath / 2; // calcul de la moyenne en maths


    for (i = 0; i < 2; i++)
    {
        printf(" %s Entrez vos note en pc[%d] :\n", nom,i+1);
        scanf("%lf", &notepc[i]);
        tpc += notepc[i]; // cumul des notes en pc
    }
    Moypc = tpc / 2; // calcul de la moyenne en pc

    for (i = 0; i < 2; i++)
    {
        printf("%s Donner vos note en svt [%d] :\n", nom, i+1);
        scanf("%lf", &notesvt[i]);
        tsvt = notesvt[i];// cumul des notes en svt
    }
    Moysvt = tsvt / 2; // calcul de la moyenne en svt

    
    moy = ((Moymath * coefmath) + (Moypc* coefpc) + (Moysvt * coefsvt)) / coef; // ici on calcul la moyenne générale

    printf("%s  Votre moyenne génèrale est:\n %.2f", nom, moy);

    //**************************//
   // * les mentions             *                         
    //***************************//
    if (moy < 10)
    {
        printf("mediocre\n");
    }
    if (moy == 10)
    {
        printf("   passable\n");
    }
    if ((moy > 10) && (moy < 14))

    {
        printf("tres bien\n");
    }
    if (moy > 14)
    {
        printf("   excellent");
    }
        return 0;
}