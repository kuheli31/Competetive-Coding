#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int temp = n;
	int rev=0;

	while(temp>0)
	{
		int rem = temp%10;
		rev = rev*10 + rem;
		temp = temp/10;
	}
	return rev;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
      int n;
      cin>>n;
      cout<< solve(n) << endl;
    }
    return 0;
}