void a(int* a)
{
    a[0]=10;
}
#include <stdio.h>
int main(void)
{
    int arr[] = {5};
    a(arr);
    printf("%d", arr[0]==10);
    return 0;
}
