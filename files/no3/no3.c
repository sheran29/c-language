#include<stdio.h>
int main(int argc, char *argv[])
{
  if(argc<3)
  {
   printf("not valid");
  }
 else
  {
   char c[20];
  FILE *fp1;
  fp1=fopen(argv[1],"r");
  //fputs("CDAC",fp1);
 FILE *fp2;
  fp2=fopen(argv[2],"r");
 // fputs("hyderabad",fp2);
  FILE *fpc;
 fpc=fopen("target.txt","w");
  if(fpc==NULL)
  {
   perror("error");
   return -1;
  }
 while(fgets(c,20,fp1)!=NULL)
{
  //c=fgetc(fp1);
  fprintf(fpc,"%s",c);
  fprintf(stdout,"%s",c);
}
fclose(fp1);
while(fgets(c,20,fp2)!=NULL)
{
 // c=fgets(c,20,fp2);
  fprintf(fpc,"%s",c);
  fprintf(stdout,"%s",c);
}
fclose(fp2);
fclose(fpc);
  return 0;
}
}
