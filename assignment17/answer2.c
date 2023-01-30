#include<stdio.h>
int main()
{
    char length[13] ="geekforgeeks";
      char  c ='e';
    int i,count =0;
    for(i=0;length[i];i++)
    {
       
        if(length[i] == c)
        {
            count++;
        }
    }
      printf("%d",count);
    return 0;
    
}