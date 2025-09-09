#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
	    printf("A is the greatest number",a);	
	} 
	else if (b>a)
	{
		if (b>c)
		printf("B is the greatest number",b);
	}
	else 
	printf("C is the greatest number",c);
	
	return 0;
}