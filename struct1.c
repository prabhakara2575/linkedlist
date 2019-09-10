#include<stdio.h>
#include<string.h>
struct structure
{
int age;
char name[20];
double phone;

};
int main()
{
struct structure s1;
s1.age = 22;
strcpy(s1.name,"cadbane");
s1.phone=9962212345;
printf("%d\n",s1.age);
printf("%s\n",s1.name);
printf("%lf\n",s1.phone);
return 0;
}

