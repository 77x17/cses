#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


void Process() {
    vector<string> result; result.push_back("0"), result.push_back("1");

    for (int i = 2; i < (1 << n); i <<= 1) {
        for (int j = i - 1; j >= 0; j--) result.push_back(result[j]);

        for (int j = 0; j < i; j++) result[j] = "0" + result[j];

        for (int j = i; j < 2 * i; j++) result[j] = "1" + result[j];
    }

    for (string e : result) cout << e << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
