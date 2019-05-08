#include<stdio.h>
void main(){
	int arr[10], i=0, n, j=0,k;
	arr[0] = 1;
	printf("Enter the no.of elements: ");
        scanf("%d", &k);
	printf("Enter the array");
	for(i=0; i < k; i++)
          scanf("%d", &arr[i]);

	printf("Enter element to remove:");
	scanf("%d", &n);

	for(i=0; i<k; i++)
        {
		if(arr[i] == n)
                {
			for(j=i; j<k-1; j++)
                        {
				arr[j] = arr[j+1];
			}
			k--;
                        i--;
		}

	}
        for(i=0; i < k; i++)
        printf("%d\n", arr[i]);
}
