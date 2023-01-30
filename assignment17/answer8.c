#include<stdio.h>
int main()
{ 
  char l[10] = "yashwakde" ;
  char a[10];
    int i;
   for(i=0;l[i];i++)
{    
   a[i] = l[i];
}
for(i=0;l[i];i++)
{    
    printf("%c",a[i]);
}
return 0;
}

