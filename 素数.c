#include<stdio.h>
int main()
{
	int i;
    int a=0;  // �����ĸ���
    int num=0;  // ���������
 for(num=3;num<=1000;num++)
 {
    for(i=2;i<(num-1);i++)
	{
        if(num%i==0)
		{
          break;  // ����������1
        }
		printf("%d   ",num);
		break;
    }
 }
}