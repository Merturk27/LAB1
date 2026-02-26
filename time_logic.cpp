#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    cout << "Enter the number of seconds: ";
    cin >> totalSeconds;

    int totalHour = totalSeconds / 3600;
    int remainSecond = totalSeconds % 3600;

    int totalMinute = remainSecond / 60;
    int second = remainSecond % 60;

    cout << totalSeconds << " seconds is "
         << totalHour << " hours, "
         << totalMinute << " minutes, and "
         << second << " seconds." << endl;

    return 0;
}