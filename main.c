#include <stdio.h>

#include "bsearch.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

void test_bsearch(const int *arr, int n, int x)
{
    int res;

    printf("Looking for the first arr[i] > %d: ", x);
    res = bsearch(arr, n, x);
    if (res >= 0) {
        printf("i = %d\n", res);
    } else {
        printf("no answer\n");
    }
}

int main()
{
    const int a[] = {1, 5, 6, 11, 15, 15, 15, 20, 50};

    test_bsearch(a, ARRAY_SIZE(a), 0);
    test_bsearch(a, ARRAY_SIZE(a), 7);
    test_bsearch(a, ARRAY_SIZE(a), 15);
    test_bsearch(a, ARRAY_SIZE(a), 49);
    test_bsearch(a, ARRAY_SIZE(a), 50);
    test_bsearch(a, ARRAY_SIZE(a), 100);

    return 0;
}
