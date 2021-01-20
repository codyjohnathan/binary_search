#include <stdio.h>
#include <cs50.h>

// Prototyping my function
int mid_point(int start, int end);

int main(void)
{
    int arr[] = {6, 7, 8, 9, 10, 11, 14, 15, 17, 19, 22, 23, 25, 28, 30};
    //           0  1  2  3   4   5   6   7   8   9  10  11  12  13  14
    int target = get_int("Enter an integer here\n"); //15 to test our first function - Let's change this to a get_int() after - then without CS50, onto Github

    int low = 0;

    int hi = (sizeof(arr)/sizeof(int)) - 1;


    int found = 0;
    while (low <= hi)
    {

        int mid = mid_point(low, hi);

        if (target < arr[mid])
        {
            hi = mid - 1;
        }

        else if (target > arr[mid])
        {
            low = mid + 1;
        }

        else if (target == arr[mid])
        {
            printf("Found your target %i at the %ith index \n", target, mid);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Target element not found\n");
    }

}

int mid_point(int start, int end)
{
    return (start + end) / 2;
}

