#ifndef GRAPHE_H
#define GRAPHE_H 
#define N 100

//Structure de graphe orienté
typedef struct {
  int nb_sommets    ;
  int liste_adj[N][N];

} graphe;


void ajoute_arc(graphe* g, int u, int v);
void supprime_arc(graphe* g, int u, int v);
bool est_acyclique(graphe* g);
bool est_successeur(graphe* g, int u, int v);
graphe* copie(graphe* g);
graphe* retourne_arc(graphe* g, int u, int v);
#endif
