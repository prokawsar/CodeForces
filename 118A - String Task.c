/*Date: 08.01.16
Problem: 118A - String Task
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int compare(const void *a, const void *b)
{
    return ( *(int*) a - *(int*) b);
}

int main()
{
    int i, n, x, t;

    char c[101];
  	scanf("%s", &c);
	  int l = strlen(c);

	for(i=0; i<l; i++){
		if(c[i]=='A' || c[i]=='a' || c[i]=='E' || c[i]=='e' || c[i]=='I' || c[i]=='i' || c[i]=='O' || c[i]=='o' ||
		c[i]=='U' || c[i]=='u' || c[i]=='Y' || c[i]=='y'){
			continue;
		}
		else {
			printf(".");
			printf("%c", tolower(c[i]));
		}
	} printf("\n");

    return 0;
}
