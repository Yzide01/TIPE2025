#include <stdlib.h>
#include <stdio.h>

#include "database.h"
#include "vector.h"

//Alloue la mémoire pour une base de données vide et la retourne
database create_empty_database (int n){
    database db = malloc(sizeof(struct database_s));
    db->size = n;
    db->datas = malloc(n * sizeof(vector));
    return db;
}

//Libère l'espace mémoire allouée à db
void delete_database (database db){
    for (int i = 0; i < db->size; i ++){
        delete_vector(db->datas[i]);
    }
    free(db->datas);
    free(db);
}

//Affiche le jeu de données db
void print_database (database db){
    int n = db->size;
    printf("{\n");
    for (int i = 0; i < n; i++){
        printf("  ");
        print_vector(db->datas[i]);
        printf("\n");
    }
    printf("}\n");
}
