
#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

//Initialise un vecteur de taille n au vecteur nul
vector create_zero_vector (int n){
    vector v = malloc(sizeof(struct vector_s));
    v->taille = n;
    v->content = malloc(n * sizeof(unsigned char));
    for (int i = 0; i < n; i++){
        v->content[i] = 0;
    }
    return v;
}

//Libère l'espace mémoire allouée pour v
void delete_vector (vector v){
    free(v->content);
    free(v);
}

//Affiche le vecteur v sous le format (v1, v2, ..., vn)
void print_vector (vector v){
    int n = v->taille;
    printf("(");
    for (int i = 0; i < n; i++){
        printf("%d",v->content[i]);
        if (i != n-1){
            printf(", ");
        }
    }
    printf(")\n");
}


