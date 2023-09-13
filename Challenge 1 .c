#include<stdio.h>
#include<stdlib.h>
int main (){
	/*Écrivez un programme en C qui va te permettre d'afficher vos informations personnelles :
	 Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.*/
 char sexe;	
  char nom[30],prenom[30],tele[20];
	
	 int age;
	 
	  printf("donner sexe : ");
  scanf("%c",&sexe); 
  printf("donner nom : ");
  scanf("%s",&nom);
   printf("donner prenom : ");
  scanf("%s",&prenom);
   
     printf("donner tele : ");
  scanf("%s",&tele); 
   printf("donner age : ");
  scanf("%d",&age);
   printf("nom  : %s\n",nom);
     printf("prenom  : %s\n",prenom);
      printf("prenom  : %s\n",tele);
       printf("sexe  : %c\n",sexe); 
	    printf("age  : %d\n",age);
	return 0;
}
