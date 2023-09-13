#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1, x2, y1, y2;
    printf("enter the x1\n");
    scanf("%lf", &x1);
    printf("enter x2\n");
    scanf("%lf", &x2);
    printf("enter the y1\n");
    scanf("%lf", &y1);
    printf("enter the x2\n");
    scanf("%lf", &y2);
    double dis = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("the distance between the two points is %lf\n", dis);
}