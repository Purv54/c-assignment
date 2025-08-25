#include <stdio.h>

int main() 
{
    int arr[5], i,a,b;

    printf("Enter 5 integers for the 1D array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    printf("\nOne-Dimensional Array elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n\n");

    int array[3][3];
    int sum = 0;

    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("Enter Your Value:::");
            scanf("%d",&array[a][b]);
            sum += array[a][b]; 
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("%d\t",array[a][b]);
        }
        printf("\n");
    }
    printf("\nSum of all elements in the matrix = %d\n", sum);
}
    
    