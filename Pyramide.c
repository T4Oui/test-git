#include <stdio.h>

void main(){

    int nb_o =0;
    int idx_etoile = 8;
    
    //On fait les 7 premières lignes
    for (int i=0; i<7 ; i++){
        //afficher les espaces avant la première "*" de la ligne
        for (int j=0; j<idx_etoile ; j++){
            printf(" ");
        }
        //afficher la première "*" de la ligne
        printf("*");

        //Afficher le bon nombre de o (0 pour la première ligne)
        for (int l=0; l<nb_o ; l++){
            printf("o");
        }

        //Afficher la deuxième étoile de la ligne pour toutes les lignes sauf la première
        if(idx_etoile<8)
        {
            printf("*");
        }
        printf("\n");

        //On décalle l'index de l'étoile de 1 vers la gauche
        idx_etoile --;

        //si le nombre de 0 à afficher > 0 on ajoute 2 0 par ligne à chaque tour dans le for
        if(nb_o>0)
        {
            nb_o +=2;
        }

        //Pour le cas de nb_o=0 on ne fait que +1 car 1 seul zéro sur la deuxième ligne 
        if(nb_o==0)
        {
            nb_o ++;
        }
    }

    //Corriger le décallage à l'affichage (vient d'un pb dans le code ?)
    printf(" ");

    //Affichage des 15 étoiles de la dernière ligne
    for (int k=0; k<15 ; k++){
            printf("*");
    }
        
}