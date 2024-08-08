#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Calculate the minimum of n and m
    int min_sticks = min(n, m);

    // Determine the winner
    if (min_sticks % 2 == 0) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }

    return 0;
}
