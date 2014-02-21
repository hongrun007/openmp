#include<stdio.h>
#include<omp.h>
void main()
{
	int largest = 0;
	int i=0;
	int data[10]={34,6546,3254,76,123,7657,2134,5467,89,3467};
#pragma omp parallel for
for ( i = 0; i < 10; i++ ) {
  #pragma omp critical
  if (data[i] > largest )
     largest = data[i];
	printf("now max=%d, TID=%d\n",largest,omp_get_thread_num());
}
printf("final max=%d\n",largest);
}
