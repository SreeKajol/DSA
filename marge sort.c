#include<stdio.h>
 void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back into arr[l..r
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[],
	// if there are any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[],
	// if there are any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void marge_sort(int arr[],int lb,int ub){
if(lb<ub){
        int mid=(lb+ub)/2;
    marge_sort(arr,lb,mid);
marge_sort(arr,mid+1,ub);
merge(arr,lb,mid,ub);
}

}
int main(){
    int n; scanf("%d",&n);
int arr[n],lb=0,ub=n-1;
for(int i=0;i<n;i++)scanf("%d",&arr[i]);
marge_sort(arr,lb,ub);


for(int i=0;i<n;i++)printf("%d ",arr[i]);

return 0;
}
