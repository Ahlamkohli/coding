#include<stdio.h>
void remplissagen(int *t ,int n){
  int i;
    for(i=0;i<n;i++){
     printf("donner l'element numero %d: ",i+1);
     scanf("%d",&t[i]);
}
}
void affichage(int *t,int n);
float moyenne(int *t,int n){
int i,som=0;
float moy;
   for(i=0;i<n;i++){
    som=(float)som+t[i];
    }
    moy=som/n;
    return moy;
}
int main()
{
 int *t1,*t2;
 int n,m;
    printf("donner la taille de t1: ");
    scanf("%d",&n);
    printf("donner la taille de t2: ");
    scanf("%d",&m);
    t1=(int*) malloc(n*sizeof(int));
    t2=(int*) malloc(m*sizeof(int));
    printf("siasir l'element de t1:\n");
    remplissagen(t1 ,n);
    printf("siasir l'element de t2:\n");
    remplissagen(t2 ,m);
    printf("affichage de t1:\n");
    affichage(t1, n);
    printf("affichage de t2:\n");
    affichage(t2, m);
    printf("moyenne de t1: %f \n",moyenne(t1, n));
    printf("moyenne de t2: %f ",moyenne(t2, m));
    
    return 0;
}
void affichage(int *t,int n){
int i;
   for(i=0;i<n;i++){
    printf("%d ",t[i]);
}
    printf("\n");
}
