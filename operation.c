#include<stdio.h>
#include<stdlib.h>
int main()
{   int a,b,p,s;
    
    printf("taper la valeur de a: ");
    scanf("%d",&a);
    
    printf("taper la valeur de b: ");
    scanf("%d",&b);
    s=0;
    p=1;
    p=a*b;
    s=a+b;
    printf("la somme  est:%d\n",s);
    printf("le produit est:%d\n",p);
    if(p>0) {
       printf("a et b ont le meme sign. \n ");
    } else {
       printf("a et b ont un signe different. \n");
    
    }
    if(b<0){
    printf("le sing de b est negative\n");
    }if(a<0){
    printf("le sing de a est negative\n ");
    }
    int i,d,q,r;
    d=0;
    d=a-b;
    q=a/b;
    r=a%b;
    int Tableau[5];
    Tableau[0]=s;
    Tableau[1]=p;
    Tableau[2]=d;
    Tableau[3]=q;
    Tableau[4]=r;
    for(i=0;i<=5;i++)
    printf("%d ",Tableau[i]);
    
    
    /*printf("s=%d ",Tableau[0]);
    printf("p=%d ",Tableau[1]);
    printf("d=%d ",Tableau[2]);
    printf("q=%d ",Tableau[3]);
    printf("r=%d ",Tableau[4]);*/
       return 0;
    }
