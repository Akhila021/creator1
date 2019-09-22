#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count;
     char str[100];
     printf("enter any string:");
     scanf("%s",str);
   for(i=0;str[i]!='\0';i++)
   {
       count=1;
         for(j=i+1;str[j]!='\0';j++)
         {
           if(str[i]==str[j])
           {
               count++;
               str[j]='0';
           }
         }
         if(str[i]!='0')
         printf("%c count:%d\n",str[i],count);
   }
   return 0;
}
