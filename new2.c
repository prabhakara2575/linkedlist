#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void **rrr;
int main(void)
{
rrr= malloc(sizeof(void **));
*rrr= strdup("bbb");
return 0;
}
