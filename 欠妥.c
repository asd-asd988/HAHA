//圆的周长
/*#include<stdio.h>
#define PI 3.14
int function(int x);
int sum(void);
int lock();
float average(int a[10]);
int max_function(int a,int b,int c);
int main()
{
    int r,x;
	char e;
	int l,i;
	double s;
	float a[10];
	int b[3];
	scanf("%lf\n",&r);
	s=PI*r*r;
	printf("%lf",s);
	scanf("%d",&x);
	printf("%d",function(x));
	l=lock(void);
	printf("%d",l);
	for(i=0;i<10;i++){
		scanf("%f",a[i]);
	}
	printf("%f",average(a[10]));
	for(i=0;i<3;i++){
		scanf("%d",b[i]);
	}
	printf("%d",max_function(b[1],b[2],b[3]));

    return 0;
}
//分三段数学函数问题
int function(int x)
{
	int y;
	if(x>1) y=x+1;
	else if(x>-1) y=x*2;
	     else y=x-1;
		 return y;
}
//一百以内偶数之和
int sum(void)
{
	int sum=0;
	int i;
	for(i=1;i<=100;i++){
		if(i%2==0) sum=sum+i;
	return sum;

}
//统计一行字符的大写字母个数
int lock(char e)
{
	char c;
	int counter=0;
	c=getchar();
	while(c='\n')
		if(c<='Z'||c>='A'){
			counter++;
        	c=getchar();
		}
		return counter;
}
//求平均值
float average(float a[10])
{
	int i;
	float sum=0;
	for(i=0;i<10;i++)
		sum=sum+a[i];
	sum=sum/10;	
    return sum;
}
	
//三个数最大值
int max_function(int a,int b,int c)
{
	int max;
	max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}*/
#include<stdio.h>



int main()
{
	char c;
	int counter=0;
	c=getchar();
	while(c=='\n'){
		if(c<='Z'&& c>='A')
			counter++;
       	c=getchar();
	}
		printf("%d",counter);
		return 0;
}