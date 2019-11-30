#include<stdio.h>
int main()
{
	int i;
    int a=0;  // 素数的个数
    int num=0;  // 输入的整数
 for(num=3;num<=1000;num++)
 {
    for(i=2;i<(num-1);i++)
	{
        if(num%i==0)
		{
          break;  // 素数个数加1
        }
		printf("%d   ",num);
		break;
    }
 }
}