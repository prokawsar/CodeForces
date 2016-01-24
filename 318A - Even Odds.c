/* Date: 22.01.16
Problem: 318A - Even Odds
*/
#include<stdio.h>
#include<math.h>

int main()
{
    long long r, p;
    long long i, x=0, a;
    int t = 1;

    scanf("%lld %lld", &r, &p);

	a = ceil((float)r/2);

    if( p > a){
		p = p- a;
		t = 0;
    }

    for(i=1; ; i+=2){
		if(!t){
			printf("%lld\n", p*2);
			break;
		}
		x++;
		if(x==p){
			printf("%lld\n", i);
			break;
		}

    }

    return 0;
}
