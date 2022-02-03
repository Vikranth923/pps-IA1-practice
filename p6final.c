#include<stdio.h>
#include<string.h>
void input_two_string(char *a,char *b)
{
    printf("enter the two string\n");
    scanf("%s",a);
    scanf("%s",b);
}
int str_cmp(char a[],char b[])
{
    int x,y,big,i;
    x=strlen(a);
    y=strlen(b);
    if(x>y)
    {
        big=y;
    }
    else
    {
        big=x;
    }
    for(i=0; i<big; i++)
    {
        if(a[i]>b[i])
        {
            return 1;
        }
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            return -1;
        }
    }
    return 0;
}
void output(char a[],char b[],int result)
{
    if(result==1)
    {
        printf("%s is greater than %s\n",a,b);
    }
    if(result==0)
    {
        if(strlen(a)==strlen(b))
        {
            printf("both %s and %s are same\n",a,b);
        }
        if(strlen(a)>strlen(b))
        {
            printf("%s is greater than %s\n",a,b);

        }
        if(strlen(a)<strlen(b))
        {
            printf("%s is greater than %s\n",b,a);
        }
    }
    if(result==-1)
    {
        printf("%s is greater than %s\n",b,a);
    }
}
int main()
{
    int n;
    char a[20],b[20];
    input_two_string(a,b);
    n=str_cmp(a,b);
    output(a,b,n);
    return 0;
}