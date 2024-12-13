#include <stdbool.h>
#include <stdlib.h>
#include "graphe.c"

//Algorithme -> renvoie une table de probabilités associée à bdd
//table* cree_table(database bdd){}




// Fonction score BIC à faire
// Prend en entrée un graphe, et une table de probabilités
float score_bic(graphe* g, table* t, ){

}

// Algorithme GS
void gs(graphe* g_init, database bdd, ,table* t, int n){
    bool continuer = true;
    float score_max = score_bic(g);
    graphe* g_max = g_init;
    while (continuer){
        //Générer le voisinage de g
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n; j++){
                g_nouveau = modifie(g,i,j);
                if (score_nouveau > score_max){
                    score_max = score_nouveau;
                    g_max = g_nouveau;
                }
            }
        }

        

        float score_nouveau = score_bic(g_nouveau);
 
        else{
            continuer = false;
        }
    }
}

