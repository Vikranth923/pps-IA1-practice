#include<stdio.h>
int input_n()
{
  int x;
  printf("enter the number of terms to be added");
  scanf("%d",&x);
  return x;
}
int sum_n(int n)
{
  int sum;
  sum = (n*(n+1))/2;
  return sum;
}
void output(int n, int sum)
{
  printf("sum of %d terms is %d",n,sum);
}
int main()
{
  int x, sm;
  x = input_n();
  sm = sum_n(x);
  output(x,sm);
}