#include <bits/stdc++.h>

using namespace std;

int main()
{
    string Teksts;
    int gar=0,p=0,sum=0;
    getline(cin,Teksts);
    gar=Teksts.length();
    while(p<gar)
    {
        if(Teksts[p]=='a'&&Teksts[p+1]=='a')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='e'&&Teksts[p+1]=='e')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='i'&&Teksts[p+1]=='i')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='u'&&Teksts[p+1]=='u')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='g'&&Teksts[p+1]=='j')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='k'&&Teksts[p+1]=='j')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='l'&&Teksts[p+1]=='j')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='n'&&Teksts[p+1]=='j')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='c'&&Teksts[p+1]=='h')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='s'&&Teksts[p+1]=='h')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]=='z'&&Teksts[p+1]=='h')
        {
            p++;
            sum++;
        }
        else if(Teksts[p]==' ')
        {

        }
        else
        {
            sum++;
        }
        p++;

    }
    cout<<sum;
    return 0;
}
