#include <stdio.h>

int arr[] = {1,2,3,4,5};

int arrSize[4];

int main()
{
    for(int i=0; i<5; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    arrSize[0] = 2;
    printf("%d\n",arrSize[0]);
    printf("%d\n",arrSize[2]);

    return 0;
}
