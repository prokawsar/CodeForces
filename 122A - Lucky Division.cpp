/* Date: 10.01.16
Problem: 122A - Lucky Division
*/

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int i, n;
	int l[] = {4, 7, 47, 74, 77, 44, 774, 447, 474, 747, 477, 744};

	cin >> n;

	for(i=0; i<12; i++){
		if(n== l[i] || n%l[i]==0){
			cout <<"YES\n";
			break;
		}
		else if(n%4==0 || n%7==0){
			cout <<"YES\n";
			break;
		}
	}
	if(i==12){
		cout <<"NO\n";
	}

  return 0;
}

