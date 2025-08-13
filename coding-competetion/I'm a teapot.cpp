#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    string str;
    cin>>str;
 
    	if(str[n-3] == 't' && str[n-2] == 'e' && str[n-1] == 'a')
    	{
    		cout<<"Yes";
    	}
    	else
    	{
    		cout<<"No";
    	}
    return 0;
}