#include<stdio.h>
int main()
{ 
    char l[10] ;
    int i;
    printf("enter a name\n");
    gets(l);
   
    for(i=0;l[i];i++)
    {
        if(l[i] >= 'a' && l[i] <= 'z')
        {
           l[i] = l[i] - 32;
        }
    }
      printf("uppercase is %s",l);
    }