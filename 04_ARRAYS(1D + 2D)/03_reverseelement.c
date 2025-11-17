#include <stdio.h>
int main (){
    int arr[6] = {23,45,34,67,86,99};

    //will print the elements of arr in reverse order 
    for ( int i = 5 ; i >= 0 ; i-- ){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}