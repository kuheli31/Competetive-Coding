#include <bits/stdc++.h>
using namespace std;

long solve(int A, int B) {
    return (long)A * B - min(A, B);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << solve(A, B) << endl;
    return 0;
}
