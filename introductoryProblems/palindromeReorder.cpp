#include <bits/stdc++.h>

using namespace std;


string s;

void Input() {
    cin >> s;
}


int cnt[26];

void Process() {
    sort(s.begin(), s.end());

    for (char e : s) cnt[e - 'A']++;

    int ok;

    if (s.size() & 1) ok = 2;
    else ok = 1;

    for (char e = 'A'; e <= 'Z'; e++) if (cnt[e - 'A'] & 1) ok--;

    if (ok == 1) {
        char spec = '^';

        for (char e = 'A'; e <= 'Z'; e++) {
            if (cnt[e - 'A'] & 1) spec = e, cnt[e - 'A']--;

            if (cnt[e - 'A']) {
                cnt[e - 'A'] /= 2;

                for (int i = 1; i <= cnt[e - 'A']; i++) cout << e;
            }
        }

        if (spec != '^') cout << spec;

        for (char e = 'Z'; e >= 'A'; e--) if (cnt[e - 'A']) {
            for (int i = 1; i <= cnt[e - 'A']; i++) cout << e;
        }

        cout << '\n';
    } else cout << "NO SOLUTION\n";
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
