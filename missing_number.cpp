#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long total = 1LL * (n ) * (n + 1) / 2; 
    long long sum = 0;
    int x;
    for (int i = 0; i < n-1; i++) {
        cin >> x;
        sum += x;
    }
    cout << total - sum << endl;
    return 0;
}
