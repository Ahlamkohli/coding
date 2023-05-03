#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct etudiant{
      char nom[20];
      char prenom[20];
      int  age;
      float note;
};

int main()
{
    struct etudiant e1,e2;
     printf("donner les enformation de 01 etudiant: \n");
     printf("nom: ");
     scanf("%s",e1.nom);
     printf("prenom: ");
     scanf("%s",e1.prenom);
     printf("age: ");
     scanf("%d",&e1.age);
     printf("note: ");
     scanf("%f",&e1.note);
    
     printf("donner les enformation de 02 etudiant: \n");
     printf("nom: ");
     scanf("%s",e2.nom);
     printf("prenom: ");
     scanf("%s",e2.prenom);
     printf("age: ");
     scanf("%d",&e2.age);
     printf("note: ");
     scanf("%f",&e2.note);
    
    if(e1.note>e2.note)
      printf("etudiant 1:%s %s pravo",e1.nom,e1.prenom);
    else
     printf("etudiant 2:%s %s pravo",e2.nom,e2.prenom);
   
    // gets=scanf , puts=printf    
    
     return 0;
}
