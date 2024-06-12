

#ifndef EXEMPLE_SEQUENCE_POINT_H
#define EXEMPLE_SEQUENCE_POINT_H

#include <stdio.h>
#include <stdlib.h>


/*---- le type Point et la fonction set_point ----*/
/* ou inclure le module de la tache 2             */
typedef struct Point_ { double x,y; } Point;

Point set_point(double x, double y)
{
	Point P = {x,y}; return P;
}

/*---- le type cellule de liste de point ----*/
typedef struct Cellule_Liste_Point_
{
	Point data;    /* donnee de l'element de liste */
	struct Cellule_Liste_Point_* suiv; /* pointeur sur l'element suivant */
} Cellule_Liste_Point;

/*---- le type liste de point ----*/
typedef struct Liste_Point_
{
	unsigned int taille;        /* nombre d'elements dans la liste */
	Cellule_Liste_Point *first; /* pointeur sur le premier element de la liste */
	Cellule_Liste_Point *last;  /* pointeur sur le dernier element de la liste */
	                       /* first = last = NULL et taille = 0 <=> liste vide */
} Liste_Point;

typedef Liste_Point Contour; /* type Contour = type Liste_Point */

/*---- le type tableau de point ----*/
typedef struct Tableau_Point_
{
	unsigned int taille; /* nombre d'elements dans le tableau */
	Point *tab;          /* (pointeur vers) le tableau des elements */
} Tableau_Point;

Cellule_Liste_Point *creer_element_liste_Point(Point v) ;

Liste_Point creer_liste_Point_vide() ;

Liste_Point ajouter_element_liste_Point(Liste_Point L, Point e) ;

Liste_Point supprimer_liste_Point(Liste_Point L) ;

Liste_Point concatener_liste_Point(Liste_Point L1, Liste_Point L2) ;

Liste_Point supprimer_premier_element_liste_Point(Liste_Point L) ;

Tableau_Point sequence_points_liste_vers_tableau(Liste_Point L) ;

void ecrire_contour(Liste_Point L) ;



#endif







