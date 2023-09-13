#include<stdio.h>
#include<stdlib.h>
/*Challenge 7 : Nombre entier à trois chiffres en ordre inverse*/
int main (){
	int a,b,c,k;	
  printf("donner un nommber  a est : ");
  scanf("%d",&a);
   printf("donner un nommber  b est : ");
   scanf("%d",&b);
     printf("donner un nommber  c est : ");
     scanf("%d",&c);
     k=a;
     a=c;
     c=k;
       printf("affiche un nommber  a est : %d\n",a);
           printf("affiche un nommber  b est : %d\n",b);
               printf("affiche un nommber  c est : %d\n",c);
	return 0;
}
