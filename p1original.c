#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter the numbers\n");
  scanf("%d %d",a,b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("%d+%d=%d",a,b,sum);
}
int main()
{
  int x,y,ans;
  input(&x,&y);
  add(x,y,&ans);
  output(x,y,ans);
}