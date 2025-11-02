#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> X(p, 0);
    for (int i = 0; i < p; i++){
        cin >> X[i];
    }

    int q;
    cin >> q;
    vector<int> Y(q, 0);
    for (int i = 0; i < q; i++){
        cin >> Y[i];
    }
    bitset<100001> b;
    for (int i : X) {
        b[i] = 1;
    }
    for (int i : Y) {
        b[i] = 1;
    }
    if (b.count() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}