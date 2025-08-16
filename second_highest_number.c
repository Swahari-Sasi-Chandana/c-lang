#include<stdio.h>

int main()
{
    int n, num, fnum= 0, snum = 0;
    scanf("%d", &n);
    while(n>0)
    {
        scanf("%d", &num);
        if(num > fnum)
        {
            snum = fnum;
            fnum = num;
        }
        if(num>snum && num<fnum)
        {
            snum =num;
        }
        n--;
    }
    printf("Second Highest is %d\n", snum);
    return 0;
}
