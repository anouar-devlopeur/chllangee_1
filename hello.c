#include<stdio.h>

#include<stdlib.h>


//Challenge 1 : Affichage Informations
//Écrivez un programme en C qui va te permettre d'afficher vos informations
// personnelles : Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.


int main() {
    char Nom;
    char prenom;
    int age;
    char sexe;
    int phone;
                 //    Saisir
    printf("Entrer votre nom: ");
    scanf(" %c", &Nom); 
    
    printf("Entrer votre prenom: ");
    scanf(" %c", &prenom); 
    
    printf("Entrer votre age: ");
    scanf("%d", &age);
    
    printf("Entrer votre sexe: ");
    scanf(" %c", &sexe); 
    
    printf("Entrer votre numéro de telephone: ");
    scanf("%d", &phone);
//                                   Affichage
    printf("Nom est %c\n", Nom);
    printf("Prenom est %c\n", prenom);
    printf("Sexe est %c\n", sexe);
    printf("Age est %d\n", age);
    printf("Numéro de téléphone est %d\n", phone);

    return 0;
}

