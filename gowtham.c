#include<stdio.h>
void main()
{
	int minute, h, m;
	printf("enter a minute");
	scanf("%d", &minute);
	h = minute/60;
	m = minute%60;
	printf("%d hours and %d minutes", h, m);
}
