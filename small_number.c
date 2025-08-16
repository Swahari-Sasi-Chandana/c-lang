#include<stdio.h>
void main()
{
	int x,y,z,small;
	scanf("%d",&x);
	y=1;
	while(y<=x)
	{
		scanf("%d",&z);
		if(z<small)
		small=z;
		y++;
	}
	printf("small is %d",small);
}
