#include <iostream>

using namespace std;

int main() {

    int total, count;
    int a, b;

    cin >> total;
    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> a >> b;
        total -= a * b;
    }

    if (total == 0) cout << "Yes";
    else cout << "No";



    return 0;
}