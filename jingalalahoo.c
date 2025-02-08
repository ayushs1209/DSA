#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    int left = 0, right =num-1;
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    // for(i = 0; i < num; i++)
    // {
    //     // printf("%d ",arr[num-i-1]); /////Answer in one line of code not the optimal though
    // }
    
    // while (left<right) 
    // {
    //     int temp;
    //     temp = arr[left];
    //     arr[left] = arr[right];
    //     arr[right] = temp;
    //     left++;
    //     right--;
        
    // }
    while (left<right) 
    {
        int temp = 0;
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
        
    }
    for (int i = 0; i<num; i++) {
    
    printf("%d ",arr[i]);
    }
    
      
    return 0;
}
