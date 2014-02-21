#include<stdio.h>
#include<omp.h>
void main()
{
	int data[10]={34,54,67,78,89,90,12,23,576,43};
	int max=0;
	#pragma omp parallel num_threads(10)
	if(data[omp_get_thread_num()]>max)
		max=data[omp_get_thread_num()];
	printf("max=%d\n",max);
}
