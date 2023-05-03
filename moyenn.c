#include <stdio.h>

int main()
{
  int n,i,somcoef=0;
  float s,m;
    printf("entrez n \n");
    scanf("%d",&n);
    float notes[n];
    int coef[n];
    s==0;
    for(i=0;i<n;i++){
         printf("entrez le coef[%d]: ",i);
         scanf("%d",&coef[i]);
         printf("entrez la note[%d]: ",i);
         scanf("%f",&notes[i]);
         s=s+notes[i]*coef[i];
     }
     printf("la somme est:%f\n",s);
    
      for(i=0;i<n;i++)
          somcoef=somcoef+coef[i];
        
      m=s/somcoef;
    printf("la moyenne est :%.3f",m);
     
    return 0;
}
