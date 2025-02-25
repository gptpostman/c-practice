#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,15};
    int n=sizeof(a)/sizeof(a[0]);
    int target = 18;
    int found = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(a[i]+a[j]+a[k] == target)
                {
                    //printf("%d,%d,%d\n",k,j,i);
                    printf("{%d,%d,%d}\n",a[k],a[j],a[i]);
                    found = 1;
                    // return 0;
                }
            }
        }
    }
    if (!found)
    return 0;
}

/*{
    int a[] = {10, 5, 2, 3, -6, 9, 11};
    int n = sizeof(a) / sizeof(a[0]);  // Automatically calculate the array size
    int k = 4;  // Set the target sum

    // Nested loop to find unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {  // j should iterate from 0 to i-1
            if (a[i] + a[j] == k) {
                printf("Pair found: %d, %d\n", a[j], a[i]);  // Print valid pair
            }
        }
    }

    return 0;
}*/