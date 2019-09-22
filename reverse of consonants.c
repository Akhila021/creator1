#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,j,i,k=0,count=0,m;
  char str1[100],str2[30];
  char str3[15]={'a','e','i','o','u','\0'};
  printf("enter any string:");
  scanf("%s",str1);
  for(i=0;i<strlen(str1);i++)
  {
      count=0;
      for(j=0;j<strlen(str3);j++)
      {
          if(str1[i]==str3[j])
          {
             count++;
             break;
          }
      }
      if(count==0)
     {
        str2[k]=str1[i];
        k=k+1;
      }
  }
  str2[k]='\0';
  k=strlen(str2)-1;
      for(j=0;j<strlen(str1);j++)
      {
          count=0;
          for(i=0;i<strlen(str3);i++)
          {
              if(str1[j]==str3[i])
              {
                  count++;
                  break;
              }
          }
      if(count==0)
      {
          str1[j]=str2[k];
          k--;
      }
  }
  printf("\n");
  printf("%s  %s  %s ",str1,str2,str3);
}
