#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get current time
    time_t now = time(0);
    tm* localTime = localtime(&now);

    // Print current time using cout
    cout << "Current time: ";
    cout <<  localTime->tm_hour << ":"; // Print hour (ensure two digits)
    cout << (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min << ":";   // Print minute (ensure two digits)
    cout << (localTime->tm_sec < 10 ? "0" : "") << localTime->tm_sec << endl;   // Print second (ensure two digits)

    return 0;
}
