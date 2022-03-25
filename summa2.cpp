//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,e,c,k,d,p,gar;
    //char a[100];
    int a[110],b[110];
    string aa;
    cin>>aa;
    //cin.getline(a,100);
    gar=aa.length();
    //for(i=0;a[i]!='\0';i++){a[i]-=48;}
    for(i=0;i<gar;i++){a[i]=aa[i]-'0';}
    //p=i;
    for(i=0;i<gar;i++)
    {
        a[i]*=(i+1);
        /*if(a[i]>9)
        {
            e=a[i]/10;
            c=a[i]-e*10;
            a[i]=c;
            a[i-1]=a[i-1]+e;//nebûs kur rakstît, kad i=0!!
        }*/
    }
   /* for(k=0;k<p;k++)
    {
        i=i-1;
        if(a[i]>9&&i!=0)
        {
            e=a[i]/10;
            c=a[i]-e*10;
            a[i]=c;
            a[i-1]=a[i-1]+e;
        }
    }*/
    /*for(k=0;k<p;k++)
    {
        a[k]+=48;
    }
    d=(int)a[0]-48;
    cout<<d<<a+1;
    */
    for(i=gar-1;i>=0;i--){b[i]=a[gar-i-1];}
    b[gar]=0;
    for(i=0;i<gar;i++)
    {
        b[i+1]+=(b[i]/10);
        b[i]=b[i]%10;
    }
    if(b[gar]!=0){cout<<b[gar];}
    for(i=gar-1;i>=0;i--){cout<<b[i];}
    return 0;
}
