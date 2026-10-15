#include<stdio.h>
int main(){
    int arr[100], n, i, j;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched: ");
    int key;
    scanf("%d",&key);

    int mid =n/2;
     if(arr[i]==key){
            printf("Element found at index %d\n",i);
            return 0;
        }
    for(int i=0;i<mid;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n",i);
            return 0;
        }
    }
            for(int j=mid;j<n;j++){
                if(arr[j]==key){
                    printf("Element found at index %d\n",j);
                    return 0;
                }
            }

        }
        