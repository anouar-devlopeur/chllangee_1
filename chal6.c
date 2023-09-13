#define p 3.14

int main()
{
    float r, cir;

    printf("Enter r: ");
    scanf("%f", &r);

    cir = 2 * p * r;

    printf("The circumference is: %f\n", cir);

    return 0;
}