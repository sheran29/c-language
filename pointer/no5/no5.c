#include<stdio.h>
#include<string.h>
int replace(char *cat);
int main()
{
    char c[] = "the cat sat";
    char *cat;
    cat=c;
    puts(cat);
    printf("\n");
    int n=replace(cat);
     printf("no of space=%d",n);
    return 0;
}
int replace(char *cat)
{    int count=0;
    for(int i=0;i<strlen(cat);i++)
     {
      if(cat[i]==' ')
        {
          cat[i]='-';
          count++;
        }
     }
     puts(cat);
     printf("\n");
    return count;
}

