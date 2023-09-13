#include <stdio.h>
#include <stdlib.h>
//Challenge 7 : 
int main() {
    char n[100];
    int i=0;
    char tab[100];
	
	
//	Saisir  
    printf("Enter n: ");
    scanf("%s", &n);  


//convert to dicimal
   int dicimal;
   
      
//    convert to hexdicimal
    do {
        int mod = n % 16; 
        switch (mod) {
            case 10:
                tab[i] = 'A'; 
                break;
            case 11:
                tab[i] = 'B';
                break;
            case 12:
                tab[i] = 'C';
                break;
            case 13:
                tab[i] = 'D';
                break;
            case 14:
                tab[i] = 'E';
                break;
            case 15:
                tab[i] = 'F';
                break;
            default:
                tab[i] = mod + '0';
        }

        n = n / 16;
        i++;
    } while (n != 0);

   
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", tab[j]);
    }

    return 0;
}
