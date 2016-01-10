/* Date: 10.01.16
Problem: 133A - HQ9+
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int main() {
	int i, n, m, t=0, k, w=0;
	string c;

	cin>> c;

	for(i=0; i<c.length(); i++){
		if(c[i]== 'H' || c[i]== 'Q' || c[i]== '9'){
			cout << "YES"<< endl;
			break;
		}
	} if(i== c.length()){
		cout << "NO"<< endl;
		}

	return 0;
}
