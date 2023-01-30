#include<stdio.h>
int main()
{
    char length[10];
     gets(length);
    int i;
    for(i=0;length[i];i++);
    printf("length of string is %d",i);
    return 0;
    
}