#include <omp.h>
#include <stdio.h>
int main()
{
	#pragma omp parallel
	{
		printf("Hello World! I am thread %d\n",omp_get_thread_num());
	}
}
