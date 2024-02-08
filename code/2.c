#include<stdio.h>
#include<omp.h>
int main(){
	int A[1000];
	omp_set_num_threads=4;
	#pragma omp parallel
	{
		int ID=omp_get_thread_num();
		pooh(ID,A);
	}
	printf("All Done\n");


	return 0;
}
