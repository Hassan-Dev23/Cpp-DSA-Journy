// code written by me which has problem of pow function
// then chat gpt debug that you should use your own user-defined power functon
#include <iostream>
#include <math.h>

using namespace std;
int checkarnstrong(int n)
{
    int ans = 0, mask = n, count = 0, num;
    while (mask)
    {
        mask /= 10;
        count++;
    }
    mask = n;
    while (mask)
    {
        num = mask % 10;
        mask /= 10;
        ans = ans + pow(num, count);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << checkarnstrong(n);

    return 0;
}

// #include <iostream>

// using namespace std;

// int calculatePower(int base, int exp) {
//     int result = 1;
//     for (int i = 0; i < exp; ++i) {
//         result *= base;
//     }
//     return result;
// }

// bool isArmstrong(int n) {
//     int originalNumber = n;
//     int ans = 0;
//     int count = 0;

//     // Count the number of digits
//     int mask = n;
//     while (mask > 0) {
//         mask /= 10;
//         count++;
//     }

//     mask = n;
//     // Calculate the Armstrong number
//     while (mask > 0) {
//         int num = mask % 10;
//         mask /= 10;
//         ans += calculatePower(num, count);
//     }

//     // Debug print statements
//     cout << "Original Number: " << originalNumber << endl;
//     cout << "Calculated Armstrong Sum: " << ans << endl;

//     // Check if the calculated Armstrong number equals the original number
//     return ans == originalNumber;
// }

// int main() {
//     int n;
//     cin >> n;
//     if (isArmstrong(n)) {
//         cout << n << " is an Armstrong number." << endl;
//     } else {
//         cout << n << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }
