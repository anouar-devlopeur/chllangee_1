#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Challenge 5:
int main(){
   int x1,y1,x2,y2;
   double MN;
   
  
   
      printf("entrer valleur x1: " );
      	scanf("%d",&x1);
       printf("entrer valleur  y1: " );
	   scanf("%d",&y1);
	   printf("entrer valleur x2: " );
      	scanf("%d",&x2);
       printf("entrer valleur  y2: " );
	   scanf("%d",&y2);
		

    MN=sqrt(pow((x2-x1),2)+pow((y2-y1	),2));
	printf("rest de MN est %.2lf:",MN);

  
  


	

		
	return 0;
}
