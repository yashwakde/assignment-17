#include<stdio.h>
int main()
{ 
  char l[10] = {'b','a','e','t','u','c','e','g','i','h'};
    int i,j,temp = 0;
   for(i=0;i<9;i++)
  {    
  for(j=i+1;j<10;j++)
  {
    if(l[i]>l[j])
    {
    temp=l[i];
    l[i] =l[j];
    l[j]=temp;
    }
  }
 }
  for(i=0;i<10;i++)
{    
 printf("%c ",l[i]);
}
return 0;
}

