#include<stdio.h>
#include<stdlib.h>
/*Challenge 7 : Nombre entier à trois chiffres en ordre inverse*/
int main (){
	int n,b;	
  printf("donner un nommber  a est : ");
  scanf("%d",&n);
 b = (n % 10) * 100 + ((n / 10) % 10) * 10 + n / 100;
printf("L'inverse de %d est : %d\n", n, b);
	return 0;
}
