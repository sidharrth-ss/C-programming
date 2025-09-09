#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>=100 && n<=999)
    printf("It is a 3 digit number",n);
	else 
	printf("It is not a 3 digit number",n);
	return 0;
}