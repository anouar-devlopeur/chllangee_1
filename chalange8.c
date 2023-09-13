/*Challenge 8 : octal hex*/
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,r,a,b,c,h,k;
  printf("donneer un number trois :");
  scanf("%d",&n);
  
 printf("hexdiCimal : %x\n",n);
 
    r=n%8;
    n=n/8;
      a=r;
      r=n%8;
    n=n/8; 
	 b=r;
      r=n%8;
    n=n/8; 
	c=r;
	 k=a;
     a=c;
     c=k;
	printf("octal  :%d%d%d\n",a,b,c);

	return 0;
}
