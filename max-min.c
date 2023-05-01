#include <stdio.h>
#include <stdlib.h>
void sing(int a, int b){
    if(a*b>0)
        printf("les valeur sont de mem sing\n");
        else
          printf("les valeur ne sont pas de mem sing\n");
}
int minimum(int a,int b){
      int min;
      if(a>b)
        min=b;
      else
        min=a;
      return min;
}
int maximum(int a,int b){
      int max;
      if(a>b)
        max=a;
      else
        max=b;
      return max;
}
int main()
{  int a,b,max,min;
    printf("veuillez entrez la valeur de a: ");
    scanf("%d",&a);
     printf("veuillez entrez la valeur de b: ");
    scanf("%d",&b);
    sing(a,b);
    printf("le maximum est: %d\n",maximum(a,b));
    printf("le mimimum est: %d",minimum(a,b));
    return 0;
}
