#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "graphe.h"

graphe g0 = {
  .nb_sommets = 6,
  .liste_adj = {
    { 1,  2,  3, -1, -1, -1, -1, -1, -1, -1}, /* 0 */
    { 4, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 1 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 2 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 3 */
    { 5, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 4 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 5 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 6 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 7 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 8 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 9 */
  }
};

graphe g1 = {
  .nb_sommets = 6,
  .liste_adj = {
    { 1,  2,  3, -1, -1, -1, -1, -1, -1, -1}, /* 0 */
    { 4, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 1 */
    { 3,  4, -1, -1, -1, -1, -1, -1, -1, -1}, /* 2 */
    { 5, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 3 */
    { 5, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 4 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 5 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 6 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 7 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 8 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 9 */
  }
};

graphe g2 = {
  .nb_sommets = 6,
  .liste_adj = {
    { 1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 0 */
    { 2,  4, -1, -1, -1, -1, -1, -1, -1, -1}, /* 1 */
    { 3, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 2 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 3 */
    { 0, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 4 */
    { 3, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 5 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 6 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 7 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 8 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 9 */
  }
};

graphe g3 = {
  .nb_sommets = 8,
  .liste_adj = {
    { 1,  4, -1, -1, -1, -1, -1, -1, -1, -1}, /* 0 */
    { 5,  6, -1, -1, -1, -1, -1, -1, -1, -1}, /* 1 */
    { 1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 2 */
    { 0, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 3 */
    { 3,  5, -1, -1, -1, -1, -1, -1, -1, -1}, /* 4 */
    { 6, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 5 */
    { 2,  7, -1, -1, -1, -1, -1, -1, -1, -1}, /* 6 */
    { 2, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 7 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 8 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 9 */
  }
};

graphe g4 = {
  .nb_sommets = 8,
  .liste_adj = {
    { 4,  -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 0 */
    { 5,  6, -1, -1, -1, -1, -1, -1, -1, -1}, /* 1 */
    { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 2 */
    { 0, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 3 */
    { 3,  5, -1, -1, -1, -1, -1, -1, -1, -1}, /* 4 */
    { 6, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 5 */
    { 2,  7, -1, -1, -1, -1, -1, -1, -1, -1}, /* 6 */
    { 2, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 7 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 8 */
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, /* 9 */
  }
};



pile pile_creation() {
  //crée une pile vide et la retourne
  int* t = malloc(N * sizeof(int));
  pile p = malloc(sizeof(struct pile_s));
  p->tab = t;
  p->sommet = 0;
  return p;
}

void free_pile(pile p) {
  //libére la pile
  free(p->tab);
  free(p);
}


void empile(pile p, int n) {
  // ajoute l'entier n au sommet de la pile p
  p->tab[p->sommet] = n;
  p->sommet = p->sommet + 1;
}


bool est_vide(pile p) {
  // teste si p est vide
  return (p->sommet == 0);
}

int depile(pile p) {
  //supprime le sommet de la pile p et le retourne
  p->sommet = p->sommet - 1;
  return p->tab[p->sommet];
}

//Teste si v est successeur de u dans le graphe g
bool est_successeur(graphe* g, int u, int v){
  int n = g->nb_sommets;
  for (int i = 0; i < n; i++){
    if (g->liste_adj[u][i] == v){
      return true;
    }
  }
  return false;
}

//Ajoute un arc de u à v dans g
void ajoute_arc(graphe* g, int u, int v){ //bug ?
  int i = 0;
  while (g->liste_adj[u][i] != -1){
    if (i == g->nb_sommets){
      printf("Erreur d'ajout d'un arc déjà existant\n");
      break;
    }
    i++;
  }
  g->liste_adj[u][i] = v;
}

//Supprime l'arc de u à v dans g complexité : O(m)
void supprime_arc(graphe* g, int u, int v){
  assert(est_successeur(g,u,v));
  int ind_suppr = 0;
  int ind_dern = 0;
  while (g->liste_adj[u][ind_suppr] != v){
    ind_suppr++;
  }
  while(ind_dern < g->nb_sommets && g->liste_adj[u][ind_dern+1] != -1){ //erreur possible ?
    ind_dern++;
  }
  //Échange l'indice de la valeur supprimée et la dernière valeur
  g->liste_adj[u][ind_suppr] = g->liste_adj[u][ind_dern];
  g->liste_adj[u][ind_dern] = -1;

}

//Teste si le graphe g est acyclique en vérifiant qu'il y a un tri topologique
bool est_acyclique(graphe* g){
    int n = g->nb_sommets;
    int* deg_entrants = malloc(n * sizeof(int));
    bool* visite = malloc(n * sizeof(bool));
    for (int i = 0; i < n; i++){
        visite[i] = false;
        deg_entrants[i]=0 ;
    }
    for (int i = 0; i < n; i++ ){
        int j = 0;
        while (g->liste_adj[i][j] != -1 && j < n){
            deg_entrants[g->liste_adj[i][j]] ++;
            j++;
        }
    }
    pile p = pile_creation();
    for (int i = 0; i < n; i++){
        if (deg_entrants[i] == 0){
            empile(p, i);
        }
    }
    //Parcours de g selon tri topologique
    while (!est_vide(p)){
        int u = depile(p);
        visite[u] = true;
        int v = 0;
        while(g->liste_adj[u][v]!= -1 && v<n){
            deg_entrants[g->liste_adj[u][v]] --;
            if (deg_entrants[g->liste_adj[u][v]] == 0){
                empile(p,g->liste_adj[u][v]);
            }
            v++;
        }
    }
    free(deg_entrants);
    free_pile(p);
    //Vérifie que tous les sommets ont été visités, ie on a pu faire un tri topologique
    for (int i = 0; i < n; i++){
        if (!visite[i]){
            free(visite);
            return false;
        }
    } 
    free(visite);
    return true;
}


//copie le graphe g
graphe* copie(graphe* g){
  int n=g->nb_sommets;
  graphe* g2 = malloc(sizeof(graphe));
  g2->nb_sommets=n;
  //g2->liste_adj=malloc(n*sizeof(int*));
  for(int i=0; i<n ; i++){
    //g2->liste_adj[i]=malloc(n*sizeof(int));
    for(int j=0; j<n ; j++){
      g2->liste_adj[i][j]=g->liste_adj[i][j];   
    }
  }
  return g2;
}

/* PAS POUR L'INSTANT
//PAS TESTÉ !!!
//libere le graphe g
void free_graphe(graphe* g){
  int n=g->nb_sommets;
  for(int i=0; i<n ; i++){
    free(g->liste_adj[i]);
  }
  free(g->liste_adj);
  free(g);
}*/

//PAS TESTÉ !!!
//modifie systématiquement le graphe initial, en ajoutant/supprimant l'arc (u,v) selon sa présence dans le graphe
graphe* modifie(graphe* g, int u, int v){
  graphe* g2 = copie(g);
  if(est_successeur(g2, u, v)){
    supprime_arc(g2, u, v);
  }else{
    ajoute_arc(g2, u, v);
  }
  return g2;
}


//Hypothèse : il existe un arc de u à v dans g
//Effet : renvoie une copie de g donc l'arc de u à v a été retournée
graphe* retourne_arc(graphe* g, int u, int v){
  graphe* g_copie = copie(g);
  assert(est_successeur(g,u,v));
  supprime_arc(g_copie,u,v);
  ajoute_arc(g_copie,v,u);
  return g_copie;
}

//Teste la fonction est_acyclique
void test_est_acyclique () {
    assert(est_acyclique(&g0));
    assert(est_acyclique(&g1));
    assert(!est_acyclique(&g2));
    assert(!est_acyclique(&g3));
    assert(!est_acyclique(&g4));

}

//Teste supprime_arc, ajoute_arc, retourne_arc
void test_utilitaires (){
  supprime_arc(&g0, 0, 2);
  ajoute_arc(&g0,0,4);
  printf("%d %d %d %d\n",(g0.liste_adj[0][0]),g0.liste_adj[0][1],g0.liste_adj[0][2],g0.liste_adj[0][3]);

  graphe* g_test = retourne_arc(&g0, 0, 4);
  printf("%d %d\n",g_test->liste_adj[0][2],g_test->liste_adj[4][1]);
  free(g_test);
}


int main(){
    test_est_acyclique();
    test_utilitaires();
    printf("réussi\n");
    return 0;
}
