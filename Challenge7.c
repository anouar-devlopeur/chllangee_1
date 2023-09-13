#include<stdio.h>
#include<stdlib.h>
/*Challenge 7 : Nombre entier à trois chiffres en ordre inverse*/
int main (){
	int n,b,x,y;	
  printf("donner un nommber  a est : ");
  scanf("%d",&n);
  x=(n % 10) ;
  y=((n / 10) % 10) ;
 b = n /100;
 printf("L'inverse de %d est : %d%d%d\n", n, x,y,b);

	// a comment
	return 0;
}
