//
//  main.c
//  test
//
//  Created by 汪航 on 2021/10/21.
//

#include <stdio.h>
int chprime(int t)
{
    int isprime1=1;
    for (int j=2;j<t;++j)
    {
        if (t%j==0)
        {
            isprime1=0;
            break;
        }
    }
    return isprime1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    scanf("%d",&n);
    int i=1;
    for (; i <= n; ++i)
    {
        int b=0;
        int prime=0;
        while (b!=-1)
        {
            
            scanf("%d",&b);
            int isprime=0;
            isprime=chprime(b);
            if (isprime==1)
            {
                prime++;
                /* code */
            }

        }
        printf("%d\n",prime-1 );
        /* code */
    printf("Hello, World!\n");
    return 0;
    }}
