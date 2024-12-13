#ifndef DATABASE_H
#define DATABASE_H

#include "vector.h"


struct database_s {
  int size ;                        /* taille du jeu de données */
  vector* datas ; /* tableau contenant les données classifiées */
};

typedef struct database_s * database;

database create_empty_database (int n);
void delete_database(database db);
void print_database(database db);

#endif


