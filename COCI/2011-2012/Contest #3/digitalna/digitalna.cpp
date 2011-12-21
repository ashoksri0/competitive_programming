// Andrés Mejía
using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

////////////// Prewritten code follows. Look down for solution. ////////////////
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
////////////////////////// Solution starts below. //////////////////////////////

string tv[105];

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; ++i) cin >> tv[i];
    
    for (int i = 0; i < n; ++i) {
        if (tv[i] == "BLJTV1") {
            while (i > 0) {
                printf("4");
                swap(tv[i], tv[i-1]);
                i--;
            }
            break;
        } else {
            printf("1");
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (tv[i] == "BLJTV2") {
            while (i > 1) {
                printf("4");
                swap(tv[i], tv[i-1]);
                i--;
            }
            break;
        } else {
            printf("1");
        }
    }
    puts("");
    return 0;
}