#include <bits/stdc++.h>

using namespace std;


string s;

void Input() {
    cin >> s;
}


void Process() {
    int result = 0;

    for (int l = 0, r = 0; l < s.size(); l++) {
        while (r < s.size() && s[l] == s[r]) r++; r--;

        result = max(result, r - l + 1);

        l = r++;
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
