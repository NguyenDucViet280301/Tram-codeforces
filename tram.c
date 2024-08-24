#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    int a[n], b[n];    //người rời xe, người lên xe

    for(int i = 0; i < n; i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    int min = 0; //sức chứa
    int mountPeople = 0; //số người hiện tại trong xe

    for( int i = 0; i < n; i++){
        mountPeople = mountPeople + b[i] - a[i];

        if(mountPeople > min){
            min = mountPeople;
        }
        if(mountPeople < 0){
            printf("Erro");
            return 0;
        }
    }
    printf("%d", min);
    return 0;
}