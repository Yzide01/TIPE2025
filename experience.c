#include <stdlib.h>
#include <stdbool.h>
#include "experience.h"
#include "database.h"
#include "vector.h"



//Retourne un jeu de données de taille db_size de vecteurs choisis uniformément dans [0;255]²
database cree_jdd(int db_size){
    database db = create_empty_database(db_size);
    for (int i = 0; i < db_size; i++){
        vector v = create_zero_vector(5);
        int experience = 1 + rand()%5;
        int complexite = 1 + rand()%5;  
        bool accident = false;
        bool hopital = false;
        bool maison = false;
        if (experience < complexite - 1){
            accident = true;
            if (experience < complexite - 2){
                hopital = true;
            }
        }
        if (rand()%10 == 0){
            maison = true;
        }
        v->content[0] = experience;
        v->content[1] = complexite;
        v->content[2] = accident;
        v->content[3] = hopital;
        v->content[4] = maison;
        db->datas[i] = v;
    }
    return db;
}