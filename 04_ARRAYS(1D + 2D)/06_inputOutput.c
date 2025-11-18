#include <stdio.h>
int main(){
    int m,n;
    int arr[m][n];
    printf (" Enter the no of row (m) = ");
    scanf ("%d",&m);
    printf (" Enter the no of column (m) = ");
    scanf ("%d",&n);

    for ( int m = 0 ; m < 3 ; m++){
        for ( int n = 0 ; n < 3 ; n++){
            scanf("%d",&arr[m][n]);
        }
        printf("\n");
    }

    for ( int m = 0 ; m < 3 ; m++){
        for ( int n = 0 ; n < 3 ; n++){
            printf("%d ",arr[m][n]);
        }
        printf("\n");
    }
    return 0;
}