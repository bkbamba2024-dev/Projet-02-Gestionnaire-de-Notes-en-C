#include <stdio.h>
void afficherMenu();
void saisirNotes(float notes[],int n);
void afficherLesNotes(float notes[],int n);
float calculerMoyenne(float notes[],int n);
float afficherNoteMax(float notes[], int n);
float afficherNoteMin(float notes[], int n);
#define MAX 100
int main()
{
    int n,choix;
    do {
            printf("Entrez le nombre de notes que vous désirer saissir: ");
            scanf("%d",&n);
            if (n <= 0 || n > MAX){
                printf("Nombre de notes invalide !\n");
                return 1; }
            float notes[MAX];
            saisirNotes(notes,n);
            printf("\n************************************\n");
            do{
                    printf("\n--------MENU--------\n");
                    afficherMenu();
                    printf("\n************************************\n");
                    printf("Fais votre choix: ");
                    scanf("%d",&choix);
                    switch(choix){
                        case 1:afficherLesNotes(notes,n);break;
                        case 2:printf("La moyenne des notes saissi est: %.2f\n",calculerMoyenne(notes,n));break;
                        case 3:printf("la meilleure note est: %.2f\n",afficherNoteMax(notes, n));break;
                        case 4:printf("la plus faible note est: %.2f\n",afficherNoteMin(notes,n));break;
                        case 5:printf("Nouvelle saisie des notes...\n");break;
                        case 6:printf("Merci d'avoir utilise le gestionnaire de notes.\n");break;
                        default:printf("Choix invalide !\n");}
            }while (choix != 5 && choix != 6);
    }while (choix != 6);
    return 0;
}
void afficherMenu(){
 printf("1.Afficher les notes.\n");
 printf("2.Calculer la moyenne.\n");
 printf("3.Afficher la meilleure note.\n");
 printf("4.Afficher la plus faible note.\n");
 printf("5.Nouvelle saisie\n");
 printf("6.Quitter\n");}
 void saisirNotes(float notes[],int n){
 for(int i=0;i<n;i++){
    printf("Entrez la note %d: ",i+1);
    scanf("%f",&notes[i]);
 }}
 void afficherLesNotes(float notes[], int n){
     for(int i=0;i<n;i++)
        printf("%.2f\n", notes[i]);
 }
 float calculerMoyenne(float notes[], int n){
     float Sum=0;
     for(int i=0;i<n;i++){
            Sum=Sum+notes[i];
    }
    float Moy=Sum/n;
    return Moy;
 }
 float afficherNoteMax(float notes[], int n){
    float Max = notes[0];
    for(int i=0;i<n;i++){
        if(Max<notes[i])
            Max=notes[i];
 }
    return Max;
 }
 float afficherNoteMin(float notes[], int n){
    float Min = notes[0];
    for(int i=0;i<n;i++){
        if(Min>notes[i])
            Min=notes[i];
 }
    return Min;
 }
