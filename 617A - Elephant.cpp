/* Date: 21.01.16
Problem: 617A - Elephant
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define SIZE 40000000

using namespace std;

vector<long long >v;
set <long long > s;


long prime[SIZE];

void sieve()
{
	int i, M;

	for(i=3; i<sqrt(SIZE); i++){

		if(!prime[i]){
			for(M=i*i; M<SIZE; M+=i){
				prime[M]=1;
			}
		}
	}
	for(i=3; i<SIZE; i+=2){
		if(!prime[i]){
			v.push_back(i);
		}
	}

}

int main(){

	long long x, i, n;
	int s[]= {1, 2, 3, 4, 5};

	cin >> x;
	n = 0;

	for(i=4; i>=0; i--){
		if(x%s[i]==0){
			n = n+x/s[i];
			break;
		}
		else {
			while(x>s[i]){
				n = n + (x/s[i]);
				x=x%s[i];
			}
		}
	}

	printf("%d\n", n);

	return 0;

}
