/*Date: 08.01.16
Problem: 131A - cAPS lOCK
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

    if(isupper(c[0])==1){
		x=1;
		for(i=1; i<l; i++){
			if(isupper(c[i])==1){
				x++;
			}
		}
		if(x==l){
			printf("%c", tolower(c[0]));
			for(i=1; i<l; i++){
				printf("%c", tolower(c[i]));
			} printf("\n");
		}
		else printf("%s\n", c);
	}
	else {
		for(i=1; i<l; i++){
			if(isupper(c[i]) !=1){
				printf("%s\n", c);
				return 0;
			}
		}
		printf("%c", toupper(c[0]));
			for(i=1; i<l; i++){
				printf("%c", tolower(c[i]));
			} printf("\n");

	}

    return 0;
}
