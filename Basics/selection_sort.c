#include <stdio.h>
/*void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}*/

void selection_sort(int arr[],int n){
        int i,j,min,temp;
        for(i=1;i<=n-1;i++){
            min = i;
            for(j=i+1;j<=n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
}


int main(){
    int i,n,num;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        printf("Enter number for position %d",i);
        scanf("%d",&num);
        arr[i] = num;
    }
    
    selection_sort(arr,n);
    
    printf("Now sorted array:");
    for(i=1;i<=n;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}
