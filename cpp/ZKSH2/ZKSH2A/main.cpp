#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const ll LINF = 1e18;
const int INF = 1e9;
const ld EPS = 1e-6;
const ll MOD = 1e9 + 7;

const string filename = "";
const bool testgen = false;
const bool testrun = false;

template<class T>
T sqr(T x) { return x * x; }

struct prog {

    void run() {
        ll N;
        cin >> N;
        vector<vector<pair<ll, ll>>> tree(N);
        vector<ll> Dp(N);
        set<ll> free;
        for (int j = 0; j < N; ++j) {
            free.insert(j);
        }
        for (int i = 0; i < N - 1; ++i) {
            ll K, C;
            cin >> K >> C;
            tree[K].push_back(make_pair(i, C));
            free.erase(K);
        }
        while(!free.empty()){
            ll cur = *free.begin();
            ll sum = 0;
            for (auto child : tree[cur]) {

            }
        }


    }
};


struct gen {
    void run() {
        for (int i = 0; i < 100; ++i) {

            cout << "=" << endl;
        }
    }
};

void run_file(const char *in, const char *out) {
    freopen(in, "r", stdin);
    freopen(out, "w", stdout);
    while (!cin.eof()) {
        ll cl = clock();
        prog p;
        p.run();
        fprintf(stderr, "Execution time: %Lf \n", (long double) (clock() - cl) / CLOCKS_PER_SEC * 1000);
        cout << endl << "=" << endl;

        cout.flush();
        string s;
        do getline(cin, s);
        while (s != "=" && !cin.eof());
    }
    cin.clear();
    cout.clear();
}


int main() {
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(10);
#ifdef DEBUG
    run_file("input.txt", "output.txt");
    if (testgen) {
        freopen("in-test.txt", "w", stdout);
        gen gen1;
        gen1.run();
        cout.flush();
    }
    if (testrun)
        run_file("in-test.txt", "out-test.txt");


#else
    if(filename.compare("")){
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
    }
    prog p;
    p.run();
#endif
    return 0;
}
