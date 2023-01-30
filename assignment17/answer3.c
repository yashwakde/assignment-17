#include<stdio.h>
int main()
{ 
    char vowel[10];
    int i,j,count=0;
    printf("enter a name:\n");
    fgets(vowel,10,stdin);
    for(i=0;vowel[i];i++)
    {
        if(vowel[i] == 'a' ||vowel[i] == 'e'||vowel[i] == 'i'||vowel[i]== 'o'||vowel[i] == 'u')
        {
            count++;
        }
    }
      printf("%d",count);
    }