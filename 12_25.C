#include<stdio.h>
int main()
{
	char s[3][3]={1,2,3,4,5,6,7,8,9};
	char *p=&s[0];
	printf ("%d",*(*(++p)));
	return 0;                                                     
}