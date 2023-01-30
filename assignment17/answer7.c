#include<stdio.h>
int main()
{ 
    char l[19] ;
    int i,alphabet=0,number=0,special=0;
    printf("enter a name\n");
    fgets(l,19,stdin);
   
   for(i=0;l[i];i++)
{    
    if(l[i] >= 'a' && l[i] <= 'z' )
    alphabet++;
   else if(l[i] >= '0' && l[i] <= '9')
   number++;
   else
   special++; 
}

 printf("alphabet = %d,number =%d,special =%d",alphabet,number,special);

return 0;

}

