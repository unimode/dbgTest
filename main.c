#include <stdio.h>
void test(void);

volatile int a,b,c = 0;
int main(int argc, char **argv)
{
    test();
    printf("trace report: a = %d b= %d c = %d\n", a, b, c);
    a = 2;
    printf("trace report: a = %d b= %d c = %d\n", a, b, c);
    b = 5;
    printf("trace report: a = %d b= %d c = %d\n", a, b, c);
    c = a + b;
    printf("trace report: a = %d b= %d c = %d\n", a, b, c);
    c++;
    printf("trace report: a = %d b= %d c = %d\n", a, b, c);
    printf("Test8 \n");
    return 0;
}