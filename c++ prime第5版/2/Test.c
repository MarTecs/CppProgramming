#include<stdio.h>
int main()
{
  /*
	int a;
  a=(int)((double)(3/2)+0.5+(int)1.99*2);
  printf("%d\n",c);
  */
/*
 int a, b, c;
 a=(b=10)%(c=6);
 printf("%d %d %d\n",a,b,c );
 */
/*
float x=2.5,y=4.7;
int a=7;
printf("%lf\n", x+a%3*(int)(x+y)%2/4);
printf("%d\n", sizeof("\n"));

int i = 2;
printf("%d\n", (++i)+(++i)+(++i));
*/

int a = 3;
printf("%d\n", (a+=a-=a*=a));
}
