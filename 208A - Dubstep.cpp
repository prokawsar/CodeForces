/* Date: 25.01.16
Problem: 208A - Dubstep
*/
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define SIZE 10000000

using namespace std;

vector <ll > v;
set <ll > s;
map <char, int> m;

long prime[SIZE];

ll xGCD(ll a, ll b, ll &x, ll &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    ll x1, y1;
    ll gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

ll fact(int n)
{
    int i;
    ll f=1;
    for(i=1; i<=n; i++)
    {
        f= f*i;
    }
    return f;
}


int main()
{

	int t,  x=0;
	long long n, k=1, mi = 0, pl = 0, i;
	string c;

	cin >> c;

	for(i=0; i<c.length(); i++){

		if(c[i]=='W' && c[i+1]=='U' && c[i+2]=='B' ){
			i= i+2;
			if(x) cout << " ";
			x=0;
			continue;
		}
		else {
			x = 1;
			cout << c[i];
		}
	}

    return 0;
}
