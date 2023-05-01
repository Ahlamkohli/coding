#include <stdio.h>
#include <stdlib.h>

int main()
{ int age;
 do{
    printf("veuillez entrez vorte age: ");
    scanf("%d",&age);
 } while(age>18);
   if(age<1)
        printf("vous etre nouveau ne");
   else if(age<3)
        printf("vous etre  bebe");
   else if(age<12)
        printf("vous etre  enfant");
   else
        printf("vous etre adolescent");
    return 0;
}
