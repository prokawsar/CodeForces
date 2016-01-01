/*Date: 02.01.16
Problem: 
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
    int n;
    char c[10];
    char a[3];

    scanf("%d %s %s", &n, &a, &c);


    if(strcmp(c, "week")==0){
		if(n==6 || n==5) printf("53\n");
		else printf("52\n");
    }
    else if(n<=29){
		printf("12\n");
    }

    else if(n==31)printf("7\n");
    else printf("11\n");


    return 0;
}
