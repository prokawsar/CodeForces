/* Date: 10.01.16
Problem: 25A - IQ test
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int main() {
	int i, n, m, t=0, k, w=0;
	int arr[100];

	cin>> k;

	for(i=1; i<=k; i++){
		cin>> arr[i];
		if(arr[i]%2==0){
			w++;
			n=i;
		}
		else{
			m = i;
			t++;
		}
	}
	if(w< t){
		cout <<n<<"\n";
	}
	else cout <<m<< "\n";

	return 0;
}
