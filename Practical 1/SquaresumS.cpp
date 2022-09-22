#include<omp.h>
#include<stdio.h>
#include<stdlib.h>

static long long sum =0;
int main()
{
    double itime, ftime, exec_time;
	itime = omp_get_wtime();
    
        for(long long i=1; i<=1000;i++)
        { 
		    sum += i * i;
        }

        printf("Sum is %d  ", sum);
    
        ftime = omp_get_wtime();
        exec_time = (ftime - itime);
        printf("\nTime taken is %f\n", exec_time);
        return 0;
}