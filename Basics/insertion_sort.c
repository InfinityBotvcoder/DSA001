#include <stdio.h>
int comparision = 0;
int swap = 0;

void insertion_sort(int arr[],int n){
    int i,j,temp,key;

    for(i=0;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>arr[key]){
            comparision++;
            swap++;
            arr[j+1] = arr[j];
            j--;
        }
        comparision++;
        arr[j+1]=key;
    }
}

int main(){
    int n,i,num;
    printf("Enter number of inputs: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter number for position %d",i);
        scanf("%d",&num);
        arr[i] = num;
    }

    insertion_sort(arr,n);;

    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}
