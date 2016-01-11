/* Date: 11.01.16
Problem: 379A - New Year Candles
*/
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cmath>
#include <array>

int compare(const void *a, const void *b)
{
    return ( *(int*) a - *(int*) b);
}

using namespace std;

int main() {

	float a, b, c;
	int x;

	cin >> a >> b;

    int all= a;

    for(int i=0; ; i++){
			x= a/b;
			all = all+x;
			x+=((int)a%(int)b);
			if(x<b){
				break;
			}
			a=x;
    }
      printf("%d\n", all);
	return 0;
}
