#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


void Process() {
    int result = 0, k = 5;

    while (n / k) {
        result += n / k;

        k *= 5;
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
