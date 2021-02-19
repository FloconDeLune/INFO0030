/**
 * pnm.c
 * 
 * Ce fichier contient les d√©finitions de types et 
 * les fonctions de manipulation d'images PNM.
 * 
 * @author: Smeers Timothy S200930
 * @date: 
 * @projet: INFO0030 Projet 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "pnm.h"


/**
 * D√©finition du type opaque PNM
 *
 */
struct PNM_t {

	char format /* format */
	unsigned int ligne /* ligne */
	unsigned int colonne  /* colonne */
	unsigned int **matrice	/* matrice 2D*/
	unsigned int color /* color */
};

static read_matrice(unsigned int p_col, p_line, p_file, p_pnm){
	assert(p_col != NULL && p_line != NULL && p_file != NULL && p_pnm != Null);

	for(int l = 0; l < p_line; l++){
		for(int c = 0; c < p_col; c++){
			fscanf(p_file,"%u", &p_pnm->matrice[l][c]);
			printf("matrice: %3u", &p_pnm->matrice);
		}
	}
	return 0;
}

/** constructor */

matrice *cree_matrice(unsigned int n, unsigned int m){
	for(i=0; i<n; i++){
		r->el[i] = malloc(m*sizeof(double));

	if(!r->el[i]){
		for(j=0; j<i; j++)
			free(r->el[j]);

		free(r->el);
		free(r);
		return NULL;
	}

	for(j=0; j<m; j++)
		r->el[i][j] = 0.0;
	}//fin for - i

	r->n = n;
	r->m = m;
	return r;
}

/** destructor */
void libere_matrice(Matrice *r){

	unsigned i;
	for(i=0; i<r->n; i++)
		free(r->el[i]);

	free(r->el);
	free(r);
}//fin libere_matrice()



int load_pnm(PNM **image, char* filename) {
	assert(image != NULL && filename != NULL);

	PNM *pnm = malloc(sizeof(PNM));

	if(pnm == NULL){
		printf("Erreur\n");
		return valeur ‡ vÈrifier /** ‡ vÈrifier la valeur ‡ retourner */
	}

	FILE *file = fopen(filename,"r");

	fscanf(file,"%c", &pnm->format);
		printf("format %c", &pnm->format);


	fscanf(file, "%u %u", &pnm->ligne, &pnm->colonne);
		printf("ligne: %u , colonne %u",&pnm->ligne, &pnm->colonne);

	char l_p2 = "P2";
	char l_p3 = "P3";

	if(pnm->format == l_p2 || l_p3){
    	fscanf(file, "%u", &pnm->color);
    		printf("color: %u , ",&pnm->color);
	}

	read_matrice(&pnm->ligne, &pnm->colonne, file, pnm);

	fclose(file);

    /*1. faire un structeur
     * 2. allouer la memoire
     *
     * 3.etape scanner depuis un fichier tous les choses vers ton structeur
     * 3.1 scanner une partie
     * 3.2 avant scanner tu dois allouer la memo
     * 3.3et puis scanner
     * 4. fermeteur de ton fichier*/


   return 0;
}

int write_pnm(PNM *image, char* filename) {

   /* Ins√©rez le code ici */

   return 0;
}

