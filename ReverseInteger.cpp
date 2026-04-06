#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        while (x != 0) {
            int rem = x % 10;
            x /= 10;

            // Overflow check
            if (rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;

            rev = rev * 10 + rem;
        }

        return (int)rev;
    }
};

int main() {
    Solution sol;
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    int result = sol.reverse(x);
    cout << "Reversed integer = " << result << endl;

    return 0;
}