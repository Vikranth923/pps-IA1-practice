#include<stdio.h>
int cmp(int a, int b, int c)
{
  if (a>b)
  {
    if(a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else
  {
    if(b>c)
    {
      return b;
    }
    else 
    {
      return c;
    }
  }
}
int input()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  return x;
}
void output(int a,int b,int c,int largest)
{
  largest = cmp(a,b,c);
  printf("%d is the largest",largest);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large = cmp(x,y,z);
  output(x,y,z,large);
}