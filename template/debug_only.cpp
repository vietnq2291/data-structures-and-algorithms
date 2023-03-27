#include <bits/stdc++.h>
#define MAXN 1000000

/*
 * DESCRIPTION:
 */

using namespace std;

// ----------------------------------------------------------------------------
int chkPoint=0;
template<typename... Args>
void debug(Args... args) {

	cout << "debug (" << ++chkPoint << "):" << endl; 
	cout << "\t";
    ((cout << args << " "), ...);
	cout << "\n" << endl;
}
void debugArr(vector<int> vt) {
	for (int i = 0; i < vt.size(); i++)
		cout << i << " ";
	cout << endl;
}
// ----------------------------------------------------------------------------

void input() {}

void solve() {}

int main()
{
	input();
    solve();

	debug(2, 3, "hello", 1.3);
	debug("ahahhaha", 'c', 123333.2222, INT_MAX);

	return 0;
}