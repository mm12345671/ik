#include <stdio.h>

int main()
{

    int a[7]={5,2,1,6,7,3,4}; // <= A hard coded array

    int n=0;

    // Getting the unsorted Tree output. 
    //  sizeof(a)/sizeof(int) - used to get the array length

    while(n < (sizeof(a)/sizeof(int))/2){
        printf("Parent: %d\n",a[n]);  // <= parent node
        printf("Left Child: %d\n",a[2*n +1]); // <= left Child
        printf("Right Child: %d\n",a[2*n +2]); // <= right Child

        printf("\n");
        n++;
    }

    return 0;
}