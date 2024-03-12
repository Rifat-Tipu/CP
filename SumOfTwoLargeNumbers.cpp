
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string ans="";
    if(s1>s2)
    {
        swap(s1,s2);
    }
    int n1=s1.length(),n2=s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int c=0;
    for(int i=0;i<n1;i++)
    {
        int sum=((s1[i]-'0')+(s2[i]-'0'))+c;
        ans.push_back((sum%10)+'0');
        c=sum/10;
    }
    for(int i=n1;i<n2;i++)
    {
        int sum=(s2[i]-'0')+c;
        ans.push_back((sum%10)+'0');
        c=sum/10;
    }
    if(c)
    {
        ans.push_back(c+'0');
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;

}
