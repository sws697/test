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
    printf("Hello, World!\n");
    return 0;
}
