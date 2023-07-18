#include<stdio.h>
#include<math.h>
int GCD(int x,int y,int *a,int *b)
{
    int g,t1,t2;
    if(x%y==0)
    {
        *a=0;
        *b=1;
        return y;

    }
    else{
        g=GCD(y,x%y,&t1,&t2);
        *a=t2;
        
        *b=t1-t2*floor(x/y);
return g;
}
}
int modInv(int a,int m)
{
    int x,y,g;
    g=GCD(a,m,&x,&y);
    if(g!=1)
    printf("Inverse doesnot exist");
    exit(1);
}
else{
    return((x%m+m)%m);
}
int main()
{
    int x,y,a,b;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    printf("GCD of %d and %d is %d\n",x,y,GCD(x,y,&a,&b));
    printf("a=%d,b=%d",a,b);
    return 0;
}
