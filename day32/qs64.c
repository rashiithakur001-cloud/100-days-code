// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    int l;
    printf("Enter length of Array. ");
    scanf("%d", &l);

    int ar[l];
    for (int i = 0; i < l; i++)
    {
        printf("Enter element for %d index: ", i);
        scanf("%d", &ar[i]);
    }

    int maxCount = 0;
    int element = ar[0];

    for (int i = 0; i < l; i++)
    {
        int count = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (ar[i] == ar[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            element = ar[i];
        }
    }

    printf("Element with maximum occurrence is %d (occurs %d times)\n", element, maxCount);

    return 0;
}