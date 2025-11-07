#include <iostream>
using namespace std;

// Factorial function: calculates x! = x * (x-1) * ... * 2 * 1
int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int n, k;
    
    // Get user input for n and k
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    
    // Validate that both n and k are greater than 0
    if (n <= 0 || k <= 0) {
        cout << "Result: -1" << endl;
        return 0;
    }
    
    // TODO: Calculate combination
    
    return 0;
}