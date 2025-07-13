#include <bits/stdc++.h>
using namespace std;

 bool solve(int n){
 	if(n%2 == 0)
 	{
 		return true;
 	}
 	else
 	{
 		return false;
 	}
}

int main() {
    int n;
    cin>>n;
    if(solve(n) == true)
    {
    	cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

    return 0;
}