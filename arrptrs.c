#include<stdio.h>
int main()
{
/*char *name[]={"ravi","ravindra","ravindranath"};
printf("%s\n",(*name+1));
printf("%s\n",(*name+2)+6);*/
int a[]={10, 20,30,40,50,60};
int *p[]={a,a+1,a+2,a+3,a+4,a+5};
int **pp=p;
printf("%d\n%d\n%d\n%d\n",*pp-*p,*pp,**pp);
}

