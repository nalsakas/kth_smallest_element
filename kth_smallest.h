#include <vector>

/* kth largest element in an array */
int kth_smallest(std::vector<int> &a, int k)
{
    int j = -1;

    while (j < k)
    {
        int i = a.size() - 1;
        while(i > j + 1)
        {
            if (a[i] < a[i - 1])
            {
                int tmp = a[i - 1];
                a[i - 1] = a[i];
                a[i] = tmp;
            }
            i -= 1;
        }
        j += 1;
    }

    return a[k - 1];
}