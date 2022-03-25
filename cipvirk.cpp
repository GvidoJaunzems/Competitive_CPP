#include <iostream>

using namespace std;

int main()
{
    int a,b,n,p,o;
    cin>>a>>b>>n;
    int virkne[n];
    virkne[0]=a;
    virkne[1]=b;
    for(p=2;p<n;p++)
    {
        virkne[p]=virkne[p-2]+virkne[p-1];
        o=virkne[p]/10;
        if(virkne[p]>9)
        {
            virkne[p]=virkne[p]-o*10;
        }
    }
    cout<<virkne[n-1];
    return 0;
}
