#ifndef ALERTE_H
#define ALERTE_H
#include <stdio.h>

#define TAILLE_INITIALE_DE_MALLOC_ALERTE 3
#define TAILLE_BUFFER 150
#define TAILLE_BUFFER_RETOUR 30
#define NOM_DE_FICHIER_ALERTES "alertes.txt"
#define TAILLE_DE_CODE_GENERE_50001 50001
#define CHOIX_MAX_NIVEAU_ALERTE 3
#define CHOIX_MAX_TYPE_ALERTE 7

#define NIVAU_NOMINAL "NOMINAL\n"
#define NIVAU_URGENT "URGENT\n"
#define NIVAU_URGENCE_ABSOLUE "NOMINAL\n"

#define TYPE_INCENDIE "INCENDIE\n"
#define TYPE_ACCIDENT_ROUTE "ACCIDENT ROUTE\n"
#define TYPE_ACCIDENT_MER "ACCIDENT_MER\n"
#define TYPE_ACCIDENT_MONTAGNE "ACCIDENT MONTAGNE\n"
#define TYPE_MALAISE "MALAISE\n"
#define TYPE_EXPLOSION "EXPLOSION\n"
#define TYPE_ACCIDENT_DE_LA_VIE "ACCIDENT DE LA VIE\n"

typedef struct {
  int iCode;
  char cType[TAILLE_BUFFER];
  char cNiveau[TAILLE_BUFFER];
  char cLieu[TAILLE_BUFFER];
  int iNombreVictimes;
  char cDescription[TAILLE_BUFFER];
  int iEstTraiteParUnite;
  int iCodeUniteQuiTraite;
} Alerte;

void ajouterAlerte(Alerte **alerte, int *compteurAlerte);
void afficherUneAlerte(Alerte **alerte, int *compteurAlerte);
void afficherToutesAlertes(Alerte **alerte, int *compteurAlerte);
void modifierAlerte(Alerte **alerte, int *compteurAlerte);
void supprimerAlerte(Alerte **alerte, int *compteurAlerte);
char * typeAlerte();
char * niveauAlerte();
int genererCodeAlerte(/*Alerte **alerte, int *compteurAlerte*/);
void alertesStatiques(Alerte **alerte, int *iCompteurAlerte);
void imprimerLesAlertes(Alerte **alerte, int *iCompteurAlerte);
void chargerLesAlertes(Alerte **alerte, int *iCompteurAlerte);

#endif
