#include <ctype.h> // identifie les caractères alphanumérique
#include <stdbool.h>  // bibliothèque standard pour les valeurs booléens
#include <stdio.h>  // bibliothèque standard pour les entrées et sorties
#include <stdlib.h>  // bibliothèque standard pour l'ensemble des librairies
#include <string.h> // bibliothèque pour les variables de type chaine de caractère

void verifie(){   // fonction  où on  vérifie si le code saisi par l'utilisateur est correct
   int tab[5]={444,111,222,333,101}; // on déclare une tableau et on l'affecte des valeurs
   int i=0,j=0 ,mp;
   printf("saisir votre code secret: \n");
   scanf("%d", &mp);

   while (j< 3) // on crée une boucle tant que pour que l'action se repète et donne à l'utilisateur la possibilité de réessayer
   {
        for(i=3;i>=0;i--){
            if(tab[i]==mp){
                    printf("le code saisi est correct");

                    return ; // return tout court car la fonction void ne retourne pas de resultat
            }
       }
     

      if(j==0)
      { 
        printf("code incorrect veuillez resaisir");
        scanf("%d", &mp);
      }
      else if(j==1)
      { 
        printf("code incorrect il vous reste qu'une seule tentative");
        scanf("%d", &mp);
      }
      else
      {
        printf("code bloqué");
        return  ; // return tout court
      }
        j++;

   }
}


int main()     //fonction principale  de type int pour voir si la valeur saisi par l'user est de quel type
{
   
    char fadel[50];              //tableau avec un  nombre de caracteres dans le tableau fadel
    int tab[5]={444,111,222,333,101};         // tableau contenant les valeurs correct
    int i=0,j=0 ,mp;    // i pour parcourir les indices du tab, j pour parcourir les valeurs du tab et mp pour récupèrer la valeur saisie
    printf( "saisir un entier svp: \n" );
    scanf( "%s[^\n]", fadel );

  
    bool baxna = true; // on a un booleen pour tester si c'est correct et on envoi un resultat

    while (j< 3)  // boucle tant que pour permettre à l'utilisateur de ressaisir avec un compteur à 3
   {
        size_t length = strlen( fadel ); // size_t  est un type prédéfinie pour les entiers non signé
        for( int i=0; i<length; i++ ) {  // strlen trouve et renvoi la longeur de la chaine
            if ( ! isdigit( fadel[i] ) ) {  //La méthode isdigit renvoie True si tous les caractères d'une chaîne sont des chiffres. Sinon, il renvoie False.
                baxna = false; // on test la condition
            }
        }

        if ( baxna ){
            mp = atoi(fadel); // atoi pour convertir la chaine en valeur numérique
            for(i=3;i>=0;i--){
                if(tab[i]==mp){
                        printf("le code saisi est correct: \n");
                        return 0;
                }
            }

            if(j==0){ 
                    printf("code incorrect veuillez resaisir: \n");
                    scanf("%s", fadel);
            }else if(j==1){ 
                    printf("code incorrect il vous reste qu'une seule tentative: \n");
                    scanf("%s", fadel);
            }else{
                    printf("code bloqué");
                    return 0 ;
            }

        } else {

                if(j==0)
                { 
                    printf("code incorrect \n");
                    printf("saisir un entier: \n");
                    scanf("%s", fadel);
                }
                else if(j==1)
                { 
                    printf("saisir un entier: \n");
                    printf("code incorrect, il vous reste une  tentative \n");
                    scanf("%s", fadel);
                }
                else
                {
                    printf("Trop des tentatives \n");
                    printf("Utilisateur bloqué");
                    return 0 ;
                }

            }
    j++;
   }



   
    return 0;

}
