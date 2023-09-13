/*Challenge 5 : Distance entre deux points*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	int res;
	printf("donner numbre M (x1,x2) :\n");
	printf("donner numbre x1 :");
	scanf("%d",&x1);
	printf("donner numbre x2 :");
	scanf("%d",&x2);
	printf("donner numbre N (y1,y2) :");
	printf("donner numbre y1 :");
	scanf("%d",&y1);
	printf("donner numbre y2 :");
	scanf("%d",&y2);
	//(MN): v((x2-x1)² + (y2-y1)²)   v((12-4)² + (14-8)²) =
	res=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%d",res);
	
	return 0;
}
