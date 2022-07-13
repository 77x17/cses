#include <bits/stdc++.h>

using namespace std;


int n;

void Input() {
    cin >> n;
}


void Process() {
    if (1LL * n * (n + 1) % 4 == 0) {
        cout << "YES\n";

        long long sum = 0, target = 1LL * n * (n + 1) / 4;

        vector<int> a, b;

        for (int i = n; i >= 1; i--) {
            if (sum + i <= target) {
                sum += i;

                a.push_back(i);
            } else b.push_back(i);
        }

        cout << a.size() << '\n';  for (int e : a) cout << e << ' ';  cout << '\n';

        cout << b.size() << '\n';  for (int e : b) cout << e << ' ';  cout << '\n';
    } else cout << "NO\n";
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
