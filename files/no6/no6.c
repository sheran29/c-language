#include<stdio.h>
int main()
{
 char ch[50];
 FILE *fp;
 fp=fopen("text.tx","w+");
 printf("enter text:");
 scanf("%s",ch);
// fputs(ch,fp);
 if(fp==NULL)
  {
    perror("error");
    return -1;
  }
 for(int i=0;ch[i]!='\0';i++)
  {
    if(ch[i]>='a'&&ch[i]<='z')
    {
     ch[i]=ch[i]-32;
    }
   else if(ch[i]>='A'&&ch[i]<='Z')
    {
       ch[i]=ch[i]+32;
    }
   else
     printf("not alphabets");
 }
fseek(fp,0,SEEK_SET);
printf("%ldposition of the pointer",ftell(fp));
fputs(ch,fp);
fprintf(stdout,"%s",ch);
fclose(fp);
return 0;
}
