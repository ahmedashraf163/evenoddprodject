// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[100];
    int even[100];
    int odd[100];
    int n;
    int i;
    int j = 0;
    int k = 0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        if (arr[i]%2==0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    
    for(i=0;i<j;i++){
        printf("Even number are %d \n",even[i]);
    }
    
    
    for(i=0;i<k;i++){
        printf("Odd Numbers are %d \n",odd[i]);
    }
    

}