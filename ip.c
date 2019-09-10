#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char c[20];
char *p;
int i,j,k,l;
printf("Enter String: ");
gets(c);
p=strtok(c,".");
i=atoi(p);

p=strtok(NULL,".");
j=atoi(p);

p=strtok(NULL,".");
k=atoi(p);

p=strtok(NULL,".");
l=atoi(p);

if(((i==128)||(i==255))||(l==255)||((i==0)&&(j==0)&&(k==0)&&(l==0))||((i==127)&&(j==0)&&(k==0)&&(l==0))||(i>255)||(j>255)||(i==0)||(k>255)||(l>255))
{
printf("Invalid IP\n");
exit(0);
} 
else
{
printf("Valid IP\n");
if((i>=1)&&(i<=127))
printf("Class A\n");
else if((i>=128)&&(i<=191))
printf("Class B\n");
else if((i>=192)&&(i<=223))
printf("Class C\n");
else if((i>=224)&&(i<=239))
printf("Class D\n");
else if((i>=240)&&(i<=255))
printf("Class E\n");
else
printf("Invalid IP\n");
}	

}
