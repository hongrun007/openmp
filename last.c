#include<stdio.h>
#include<omp.h>
void main()
{
	int k=100;
	int data[10]={5,3,7,7,95,8,5,3,79,85};
	int i=0;
	int max=0;
#pragma omp parallel for 
	for(i=0;i<10;i++)
	{
		if(data[i]>max) max=data[i];
		printf("now max=%d, and TID=%d\n",max,omp_get_thread_num());
	}
	printf("final max=%d\n",max);
}
