#include <stdio.h>
#include <stdlib.h>
int caractere_m(int x){
int reslt;
if(x>='a' && x<='z')
    reslt=1;
else
    reslt=0;
        return reslt;
}
int main()
{  char x;
    printf("veuillez entrez un caractere: ");
    scanf("%c",&x);
     if(caractere_m(x)==1)
        printf("le carcter est miniscule");
     else
        printf("le carcter n'est pas miniscule ");
    return 0;
}
