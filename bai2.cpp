#include <iostream>
using namespace std;

int giaithua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaithua(n - 1);
    }
}

int result(int n, int k) {
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main() {
	int q; cin >> q; while(q--){
		int goals_T;
    	int goals_M;
    	cin >> goals_T >> goals_M;

    	int socach = result(goals_T + goals_M, goals_T);
    	cout << socach << endl;
	}

}