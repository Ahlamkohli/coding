#include <stdio.h>
int premier (int n){
    int i,tex;
    for(i=2;i<n;i++){
       if(n%i==0)
         return 0;
    }
    return 1;
    }
int parfait (int n){
    int i,s=0;
    for(i=1;i<n;i++){
       if(n%i==0)
        s=s+i;
        }
       if(s==n)
         return 1;
       else
         return 0;
    
 }
int amicaux(int n,int m){
   int i,sn=0,sm=0;
     for(i=1;i<n;i++){
       if(n%i==0)
        sn+=i;
        }
     for(i=1;i<m;i++){
       if(m%i==0)
        sm+=i;
        }
         if(sn==m && sm==n)
           return 1;
         else
           return 0;
}
int main()
{    int n,m;
   do{
    printf("saisir un nombre positive: ");
    scanf("%d",&n);
    printf("saisir un nombre positive: ");
    scanf("%d",&m);
    } while(n<=0 || m<=0);
    
     if(premier(n)==0)
       printf("le nombre %d n'est pas premier\n",n);
     else
       printf("le nombre %d est premier\n",n);
     
    if(parfait(n)==0)
       printf("le nombre %d n'est pas parfait\n",n);
     else
       printf("le nombre %d est parfait\n",n);
     
    
    if(amicaux(n,m)==0)
       printf("les nombres %d et %d ne sont pas amicaux",n,m);
     else
       printf("les nombres %d et %d sont amicaux",n,m);

    return 0;
}
