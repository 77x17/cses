#include <bits/stdc++.h>

using namespace std;


string s;

void Input() {
    cin >> s;
}


vector<string> order;

void Process() {
    sort(s.begin(), s.end());

    do order.push_back(s); while (next_permutation(s.begin(), s.end()));

    cout << order.size() << '\n';

    for (string e : order) cout << e << '\n';
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Input();

    Process();

    return 0;
}
