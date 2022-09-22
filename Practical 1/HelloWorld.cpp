#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char* argv[]){
	
	omp_set_num_threads(8);
     clock_t t;
    t = clock();
	#pragma omp parallel //generating threads
	{
        int id = omp_get_thread_num();
		printf("thread No. %d  Hello World\n", omp_get_thread_num());
        printf("ID = %d\n",id);
	}
    t = clock()-t;//finding clock cycles
    printf("%d",t);
    return 0;
}