#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int count=0;
	for(int i=0 ; i<n ;i++)
	{
		if(n%2 == 0 && i<n)
		{
			solve(n-1);
			count++;
		}
	}
	return count;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    return solve(n);
    
    return 0;
}