#include<iostream>
using namespace std;
int main()
{
int n,c=0,i,j,max=0;
cin>>n;
string s[n],name;
for(i=0;i<n;i++)
    cin>>s[i];
for(i=0;i<n;i++)
{
    c=0;
    for(j=0;j<n;j++)
    {
        if(s[i]==s[j])
        {
                c++;
        }
    }
    if(c>max)
    {
        name=s[i];
        max=c;
    }
    else if(c==max)
    {
            if(name<s[i])
            {
                name=s[i];
            }
    }
}
cout<<name<<"="<<max;
return(0);
}
