#include<stdio.h>
#include<stdlib.h>
//Challenge 7 : 
int main(){
   int a,b,c,res;
 
   
    printf("entrer valleur a: " );
    scanf("%d",&a);
     printf("entrer valleur b: " );
    scanf("%d",&b);
     printf("entrer valleur c: " );
    scanf("%d",&c);
       
  res=a;
  a=c;
   c=res;
   printf(" a est: %d " ,a);
   printf(" a est: %d " ,b);
   printf(" a est: %d " ,c);
  


	

		
	return 0;
}
