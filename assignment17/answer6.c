#include<stdio.h>
int main()
{ 
    char l[10] ;
    int i,count =0;
    printf("enter a name\n");
   gets(l);
   
   for(i=0;l[i];i++)
{
  count++;
}
    for(i=count-1;i>=0;i--)
  
     printf("%c",l[i]);
  
    
}
