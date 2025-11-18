#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp = fopen("FirstPPM.ppm", "w");

    if(fp == NULL)
    {
        perror("Erreur à l'ouverture du fichier");
        return EXIT_FAILURE;
    }  


    /* En-tête PPM (ASCII P3) */
    fprintf(fp, "P3\n");       /* identifiant magique : P3 = ASCII RGB */
    fprintf(fp, "3 2\n");      /* largeur=3, hauteur=2 */
    fprintf(fp, "255\n");      /* valeur max pour R,G,B */

  
    fprintf(fp, "255 0 0 0 255 0 0 0 255\n");
    fprintf(fp, "255 255 0 255 255 255 0 0 0\n");

    fclose(fp);

    printf("Fichier PPM écrit : \n");
    return 0;

fclose(fp);
printf("Fichier PPM créé.\n");

return EXIT_SUCCESS;

}


