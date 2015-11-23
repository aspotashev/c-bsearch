#include "bsearch.h"

/*
 * Looks for the first @i such that arr[i] > x.
 * Returns -1 when there is no answer.
 */
int bsearch(const int *arr, int n, int x)
{
    int a;
    int b;

    if (n <= 0 || arr[n - 1] <= x) {
        /* No answer */
        return -1;
    }
    /* From now on, n >= 1 and arr[n - 1] > x */

    if (arr[0] > x) {
        return 0;
    }

    /*
     * We will narrow the [a; b] range maintaining the following condition:
     *     arr[a] <= x and arr[b] > x
     */
    a = 0;
    b = n - 1;

    /* Binary search */
    while (a + 1 != b) {
        int m = (a + b) / 2;

        if (arr[m] > x) {
            b = m;
        } else {
            a = m;
        }
    }

    return b;
}
