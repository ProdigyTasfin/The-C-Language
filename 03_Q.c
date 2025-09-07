#include <stdio.h>

void toHMS(int total, int *h, int *m, int *s)
{ 
    *h = total / 3600;
    total = total % 3600;
    *m = total / 60;
    *s = total % 60;

}
int toSec(int h, int m, int s)
{   return h*3600+m*60+s;

}


int main()
{   int h1,m1,s1,h2,m2,s2,h,m,s,total;

    printf("Task A's needed Hour Minute Second: ");
    scanf("%d %d %d",&h1,&m1,&s1);

    printf("Task B's needed Hour Minute Second: ");
    scanf("%d %d %d",&h2,&m2,&s2);

    int secA = toSec(h1,m1,s1);
    int secB = toSec(h2,m2,s2);

    if(secA>secB){printf("Task A has more time than Task B\n");}
    else if (secB>secA){printf("Task B has more time than Task A\n");}
    else printf("Both are equal\n");

    total = secA+secB;
    toHMS( total, &h, &m, &s);
    printf("%dhr %dm %ds is your time\n",h,m,s);
    
     
    return 0;
}