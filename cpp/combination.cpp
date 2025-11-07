#include <iostream>
using namespace std;

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