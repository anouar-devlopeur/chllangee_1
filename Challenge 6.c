/*Challenge 6 : Circonf�rence d'un cercle*/
/*�crivez un programme pour trouver la circonf�rence d'un cercle.
 Prenez le rayon du cercle en entr�e de l'utilisateur. 
La formule pour, la circonf�rence du cercle = 2pr ; o� r est le rayon.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float c,r;
	float pi=3.14;
	printf("entre le rayon :\n");
	scanf("%f",&r);
	c=2*pi*r;
	printf("Circonf�rence d'un cercle : %f",c);
	return 0;
}
