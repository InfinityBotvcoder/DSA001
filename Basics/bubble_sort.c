#include <stdio.h>
int comparision = 0;
int swap = 0;

void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        int flag=0;
        for(j=0;j<n-i-1;j++){
            comparision++;
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap++;
                flag++;
            }
        }
        if(flag==0) break;
    }


}

int main(){
    int i,n,num;
    printf("Enter number of inputs:");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter number for position %d ",i);
        scanf("%d",&num);
        arr[i] = num;
    }

    bubble_sort(arr,n);

    printf("Sorted array: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("Swap_Count: %d Comparision_Count: %d",swap,comparision);
   
   
    return 0;
}
