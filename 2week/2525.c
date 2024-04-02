#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    d=b+c;
     if(d>=60)
    {
      f=d%60;
      e=d/=60;
      d=d-=f;
      
      a=a+=e;
      if(a>=24)
      a=a-=24;
      
     printf("%d %d",a,f);
     
      
     
    }
     else
     printf("%d %d",a,d);
     
    

    return 0;
}
