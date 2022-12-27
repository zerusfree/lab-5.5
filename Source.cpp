#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int A(int m, int n, int l, int& d)
{
	if (l > d)
		d = l;
	cout << " level = " << l << endl;
	if (m != 0 && n != 0)
		return A(m - 1, A(m, n - 1,l+1, d), l+1, d);
	else
		if (m != 0 && n == 0)
			return A(m - 1, 1,l+1, d);
		else
				return n + 1;
}
int main()
{
	int m, n, f, d = 0;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	f = A(m, n, 1, d);
	cout << "f = " << f << endl;
	cout << "depth = " << d << endl;
	return 0;
}