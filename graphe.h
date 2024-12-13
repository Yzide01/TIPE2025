#ifndef GRAPHE_H
#define GRAPHE_H 
#define N 100

//Structure de graphe orienté
typedef struct {
  int nb_sommets    ;
  int liste_adj[N][N];

} graphe;

struct pile_s {
  int*   tab;
  int sommet;
} ;
typedef struct pile_s*  pile ;


void ajoute_arc(graphe* g, int u, int v);
void supprime_arc(graphe* g, int u, int v);
bool est_acyclique(graphe* g);
bool est_successeur(graphe* g, int u, int v);
graphe* copie(graphe* g);
graphe* retourne_arc(graphe* g, int u, int v);
void free_pile(pile p);
pile pile_creation();
#endif
