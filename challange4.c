/*Challenge 4 : Moyenne et somme de 4 nombres*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b,c,d,som;
	float moy;
	printf("donner un nombre a : ");
	scanf("%f",&a);
		printf("donner un nombre b : ");
	scanf("%f",&b);
		printf("donner un nombre c : ");
	scanf("%f",&c);
		printf("donner un nombre d : ");
	scanf("%f",&d);
	som=a+b+c+d;
	moy=som/4;
	 printf("somme  : %.1f\n",som);
	  printf("Moyen  : %.1f\n",moy);
	return 0;
}
