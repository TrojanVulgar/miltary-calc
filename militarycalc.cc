#include <iostream>

int main() {
    // Get times from user.
    // @CESARVERSATTI

    int first, second;
    std::cout << "Please enter the first time:  "; std::cin >> first;
    std::cout << "Please enter the second time: "; std::cin >> second;

    // Convert both to minutes since midnight.

    first = (first / 100) * 60 + first % 100;
    second = (second / 100) * 60 + second % 100;

    // Work out time difference in minutes, taking into
    // account possibility that second time may be earlier.
    // In that case, it's treated as the following day.

    const int MINS_PER_DAY = 1440;
    int minutes = (second + MINS_PER_DAY - first) % MINS_PER_DAY;

    // Turn minutes into hours and residual minutes, then output.

    int hours = minutes / 60;
    minutes = minutes % 60;
    std::cout << hours << " hours and " << minutes << " minutes.\n";
}