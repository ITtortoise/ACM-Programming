#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define LL long long

int n;

int main()
{
    while(~scanf("%d",&n))
    {
        if(n==1) printf("0\n\n");
        else if(n%2==1)
        {
            printf("%d\n",n/2);
            while(n>3)
            {
                printf("2 ");
                n-=2;
            }
            printf("3\n");
        }
        else
        {
            printf("%d\n2",n/2);
            n-=2;
            while(n>=2)
            {
                printf(" 2");
                n-=2;
            }
            printf("\n");
        }
    }
    return 0;
}
