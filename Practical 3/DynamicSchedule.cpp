#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 200
int main(){
int* a;
int* c;
a = (int *)malloc(sizeof(int) * N);
c = (int *)malloc(sizeof(int) * N);
int b = 10;
omp_set_num_threads(4);
for(int i=0; i<N; i++){
a[i] = 0;
}
double itime, ftime, exec_time;
itime = omp_get_wtime();
#pragma omp parallel for schedule(dynamic, 2)
for(int i=0; i<N; i++){
c[i] = a[i] + b;
}
ftime = omp_get_wtime();
exec_time = ftime - itime;
printf("Time taken is %f\n", exec_time);
}
