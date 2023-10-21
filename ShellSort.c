
#include <stdio.h>
void shell_sort(int A[],int n)
{
    int j;
    for(int interval=n/2;interval>0;interval/=2)
    {
        for(int i=interval;i<n;i++)
        {
            int temp=A[i];
              for (j = i; j >= interval && A[j - interval] > temp; j -= interval)  
                A[j] = A[j - interval];  
              
            // put temp (the original a[i]) in its correct position  
            A[j] = temp;  
        }
    }
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
int main()
{
    int A[6]={6,12,9,21,15,3};

printf("Array before sorting is :\n");
display(A,6);
printf("Array after sorting is :\n");
shell_sort(A,6);
display(A,6);


    return 0;
}

