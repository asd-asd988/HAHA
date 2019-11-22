#include<stdio.h>
int main()
{
    int i=0;
	char a;
	do
	{
		a=getchar();
		if(a<='Z'&&a>='A') i++;
	}
	while(a!='A');
	printf("´óÐ´ÓÐ%d¸ö\n",i);
    return 0;
}
#include<stdio.h>
int main()
{
	char a;
	do
	{
		a=getchar();
		if(a<='z'&&a>='a') a=a-32;
	    printf("%c",a);
	} while(a!='\n');
	return 0;
}
