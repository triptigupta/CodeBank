/**
* Given an array of random numbers. Find longest increasing subsequence (LIS) in the array.
*
* @author : Tripti Gupta
*
*/

#include <stdio.h>
int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int i,j,a[n],b[n],max=1;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i] = 1;
		}
		for(i=1;i<n;i++){
			for(j=0;j<i;j++){
				if(a[i] > a[j]){
					b[i] = b[j]+1;
				}
			}
			if(max < b[i]){
				max = b[i];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
