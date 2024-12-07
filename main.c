#include <stdlib.h>
#include <stdio.h>
#include "database.h"
#include "experience.h"
#include <stdbool.h>
#define N 100
#include <time.h>

//En vrac // Temporaire


int main(){

  // BASE DE DONNEES TEST
  srand(time(NULL));
  database db = cree_jdd(100);
  printf("\nOrdre : expérience - complexité - accident - hôpital - maison\n");
  print_database(db);
  delete_database(db);
  
  return 0;
}