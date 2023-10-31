#include <iostream>
#include <set>
#include <string>

using namespace std;

set<char> nu;
string ge;

void restore_genome(const set<string>& s) {
    for (const string& f : s) {
        for (char n : f) {
            nu.insert(n);
        }
    }

    for (char nuc: nu) {
        ge += nuc;
    }
}

int main() {
    int n;
    cin >> n;

    set<string> s;
    for (int i = 0; i < n; i++) {
        string o;
        cin >> o;

        s.insert(o);
    }

    restore_genome(s);

    cout << ge << endl;

    return 0;
}
