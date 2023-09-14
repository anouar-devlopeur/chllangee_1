/*Challenge 6 : Circonférence d'un cercle*/
/*Écrivez un programme pour trouver la circonférence d'un cercle.
 Prenez le rayon du cercle en entrée de l'utilisateur. 
La formule pour, la circonférence du cercle = 2pr ; où r est le rayon.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float c,r;
	float pi=3.14;
	printf("entre le rayon :\n");
	scanf("%f",&r);
	c=2*pi*r;
	printf("Circonférence d'un cercle : %f",c);
	return 0;
}
