#include <bits/stdc++.h>
using namespace std;

class Solution { 
public: 
    // Function to count digits in 'n' that evenly divide 'n'
    int evenlyDivides(int n) { 
        if (n < 10) { // Best case: Single-digit number
            return (n == 0) ? 0 : 1; // A single digit always divides itself
        }

        int rem, count = 0;
        int temp = n; 

        while (n != 0) { 
            rem = n % 10; // Extract last digit
            n = n / 10;   // Remove last digit

            if (rem != 0 && temp % rem == 0) { 
                count++; 
            }
        }
        return count;
    }
};

int main() { 
    int t; 
    cin >> t; // Number of test cases

    while (t--) { 
        int N; 
        cin >> N; // Input number
        Solution ob; 
        cout << ob.evenlyDivides(N) << endl; 
    }
    return 0; 
}