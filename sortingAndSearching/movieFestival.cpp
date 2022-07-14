#include <bits/stdc++.h>

#define fi first

#define se second

using namespace std;


int n;  vector<pair<int, int>> arr;

void Input() {
    cin >> n;  arr.assign(n + 1, {0, 0});

    for (int i = 1; i <= n; i++) cin >> arr[i].fi >> arr[i].se;
}


void Process() {
    sort(arr.begin() + 1, arr.end(), [] (const pair<int, int>& x, const pair<int, int>& y) {return x.se < y.se;});

    int result = 0, curr = 0;

    for (int i = 1; i <= n; i++) {
        if (arr[i].fi >= curr) {
            curr = arr[i].se;

            result++;
        }
    }

    cout << result << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
