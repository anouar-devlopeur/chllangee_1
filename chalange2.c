#include<stdio.h>
#include<stdlib.h>
/*Challenge 2 : Affichage Temp�rature
Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche 
la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud) La formule : C = (F-32)/1.8*/
int main (){
 float c,f;

 printf("donne f: ");
 scanf("%f",&f);
 c=(f-32)/1.8;
// printf("%f",c);
 if(c<0){
 	printf("tres froid");
 }
 else if(c>=0 && c<=15)
 {
 	printf(" froid");
 	
 }
 else if(c>=25 && c<=30){
 	 printf(" chaud");
 }
 else{
 	printf(" tr�s chaud");
 }
	return 0;
}
