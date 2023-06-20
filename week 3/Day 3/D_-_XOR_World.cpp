#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    
    long long result = 0;
    for (long long i = a; i <= b; i++) {
        result ^= i;
    }
    
    cout << result <<endl;
    
    return 0;
}
