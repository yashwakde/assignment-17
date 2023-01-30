#include<stdio.h>
int main()
{ 
  char l[] = "abcdabcehk";
    int i;
   int hash[200] ={0};
   for(i=0;l[i]!='\0';i++)
  {    
    hash[l[i]]++;
  }
  
  for(i=0;i<123;i++)
  {
    if(hash[i] > 0)
    {
      printf("%c -> %d\n",i,hash[i]);
    }

  }
return 0;
}

