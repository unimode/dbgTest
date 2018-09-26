#include <stdio.h>
 
void test(void)
{
    printf("trace report from: file: %s function: %s\n", __FILE__, __FUNCTION__);
}