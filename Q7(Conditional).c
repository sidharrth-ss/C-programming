#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b)
    {
        if (a<c)
	    printf("A is the smallest number",a);	
	} 
	else if (b<a)
	{
		if (b<c)
		printf("B is the smallest number",b);
	}
	else 
	printf("C is the smallest number",c);
	
	return 0;
}