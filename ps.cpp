#include<iostream>
using namespace std;
typedef long long ll;
int main(){
ll a,b,c;
cin>>a>>b>>c;

if (a>=b && a>=c)
{
    if (b>c)
    {
        printf("%lli\n%lli\n%lli\n",c,b,a);
    }
    else
    {
        printf("%lli\n%lli\n%lli\n",b,c,a);
    }      
}
else if (b>=a && b>=c)
{
    if (a>c)
    {
        printf("%lli\n%lli\n%lli\n",c,a,b);
    }
    else
    {
        printf("%lli\n%lli\n%lli\n",a,c,b);
    }      
}
else
{
    if (a>b)
    {
        printf("%lli\n%lli\n%lli\n",b,a,c);
    }
    else
    {
        printf("%lli\n%lli\n%lli\n",a,b,c);
    }
}

    printf("\n");
    printf("%lli\n%lli\n%lli\n",a,b,c);



return 0;
}
