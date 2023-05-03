#include<stdio.h>

int main()
{ 
int i,j,n;
int **m;
    
    printf("donner le degre: ");
    scanf("%d",&n);
    m=(int**) malloc ((n+1)*sizeof (int*));
    for(i=0;i<=n;i++){
        m[i]=(int*)malloc ((n+1)*sizeof(int));
  }
      for(i=0;i<=n;i++)
      for(j=0;j<=i;j++)
        if(i==j || j==0)
         m[i][j]=1;
        else
         m[i][j]=m[i-1][j-1]+m[i-1][j];
        
        
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         printf("%4d",m[i][j]);
               }
            printf("\n");
            }
            return 0;
}
