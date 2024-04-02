
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a==c&&b==c)
    {
        printf("%d",10000+(1000*a));
    }
   else if(a==b||a==c)
    {
        printf("%d",1000+(100*a));
    }
    else if(b==a||b==c)
    {
        printf("%d",1000+(100*b));
    }
    else if(c==a||c==b)
    {
        printf("%d",1000+(100*c));
    }
    else if(a>=b&&a>=c)
    {
        printf("%d",100*a);
    }
    else if(b>=c&&b>=a)
    {
        printf("%d",100*b);
    }
    else if(c>=a&&c>=b)
    {
        printf("%d",100*c);
    }
    return 0;
}
