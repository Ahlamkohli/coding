#include<stdio.h>
/*void tmultiplication (int a){
   int i;
     printf("la table de multiplication de %d:\n",a);
      for(i=0;i<=10;i++)
       printf("%d × %d = %d\n",a,i,a*i);
}
int main()
{
   int a;
    printf("veuillez entrer la valeurde a: ");
    scanf("%d",&a);
    tmultiplication(a);
    tmultiplication(2);*/
/* void type_annee(int n){
     if((n%4==0 && n%100!=0)||(n%400==0))
       printf("%d est un annee bissextile\n",n);
     else
       printf("%d n'est pas un annee bissextile\n",n);
  }
 int main()
 {
    int annee;
      printf("veuillez entrez l'annee: ");
      scanf("%d",&annee);
      type_annee(annee);*/
/*void premier(int n){
   int i,np=1;
    for(i=2;i<=n/2;i++){
      if(n%i==0)
         np=0;
         break;
    }
      if(np==1)
       printf("%d est un nombre premier",n);
      else
       printf("%d n'est pas un nombre premier",n);
} 
int main()
{
 int n;
   printf("veuillez enter un nombre: ");
   scanf("%d",&n);
   premier(n);*/
/*int nbrchiffer(long n){
  int nbr=0;
    do{
    n=n/10;
    nbr++;
    } while(n!=0);
    
    return nbr;
}
int main()
{ int n;
   printf("veuillez enter un nombre: ");
   scanf("%d",&n);
   printf("les chiffre totale de %ld est: %d",n,nbrchiffer(n));
  */
return 0;
}
