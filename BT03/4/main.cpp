#include <bits/stdc++.h>

using namespace std;
char s[100][100];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int dem=0;
            if(s[i][j]=='.')
            {
                if(s[i-1][j-1]=='*')dem++;
                if(s[i-1][j]=='*')dem++;
                if(s[i-1][j+1]=='*')dem++;
                if(s[i][j-1]=='*')dem++;
                if(s[i][j+1]=='*')dem++;
                if(s[i+1][j-1]=='*')dem++;
                if(s[i+1][j]=='*')dem++;
                if(s[i+1][j+1]=='*')dem++;
                s[i][j]=dem+48;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}
