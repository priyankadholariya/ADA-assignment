#include<stdio.h>
#include<string.h>
void naive_string_matcher(char text[],char pat[])
{
 char temp[100];
 int n=strlen(text);
 int m=strlen(pat);
 int i,j,s,k,count=0;
 for(s=0;s<=n;s++)
 {
  for(j=s,k=0;j<m;j++,k++)
   temp[k]=text[s+k];
  temp[k]='\0';
  if(strcmp(pat,temp)==0)
  {
  printf("\n Pattern Occurs With Shift : %d ",s);
  count++;
  }
  m++;
 }
  printf("\n\n No Of Times Pattern Occurs  %d:",count);
}
int main()
{
 char text[100],pat[100];
 printf("\n ENTER THE TEXT    : ");
 gets(text);
 printf("\n ENTER THE PATTERN : ");
 gets(pat);
 naive_string_matcher(text,pat);
   return 0;
}

