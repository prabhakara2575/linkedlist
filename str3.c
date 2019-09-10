#include<stdio.h>
#include<string.h>
int
main ()
{
  char str1[100] = "anubav is trainer";
/*char str2[5]="is";
char *p=strstr(str1,str2);
for(int i=0;i<3;i++)
*p++;
printf("\n%s\n",p);*/
  int i;
  int len = strlen (str1);
//printf("\n%d\n",len);
  for (i = len - 1; i >= 0; i--)
    {
      if (str1[i] == ' ')
	{
	  str1[i] = '\0';
	  printf ("%s ", &(str1[i]) + 1);
	}
      
    }
printf ("%s ", str1);

  return 0;
}
