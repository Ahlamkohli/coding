#include<stdio.h>
float maximum (float T[]){
 float max=T[0];
 int i;
  for(i=0;i<10;i++){
    if(max<T[i]){
     max=T[i];
    }
   }
  return max;
}
float minimum (float T[]){
 float min=T[0];
 int i;
  for(i=0;i<10;i++){
    if(min>T[i]){
     min=T[i];
    }
     }
  return min;
}
void invers( float T[]){
  int i;
  float Ts[10];
   for(i=0;i<10;i++)
     Ts[9-i]=T[i];
   printf("les elements de Tableau invers sont: \n");
    for(i=0;i<10;i++)
     printf("%.2f ",Ts[i]);
}
int main()
{ /*int n;
  printf("saisir la taille de Tableau: ");
  scanf("%d",&n);*/
float T[10];
int i;
 printf("saisir les elements de Tableau:\n");
     for(i=0;i<10;i++){
      printf("T[%d]= ",i+1);
      scanf("%f",&T[i]);
    }
 printf("le maximum est: %.2f\n",maximum(T));   
 printf("le minimum est: %.2f\n",minimum(T));   
 invers (T);
     return 0;
}
