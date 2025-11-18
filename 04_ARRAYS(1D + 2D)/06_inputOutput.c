#include <stdio.h>
int main(){
    int m,n;
    int arr[m][n];
    printf (" Enter the no of row (m) = ");
    scanf ("%d",&m);
    printf (" Enter the no of column (m) = ");
    scanf ("%d",&n);

    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < n ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}