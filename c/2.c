#include<iostream.h>
#include<omp.h>
int main(){
    // printf("hello world");
    int i;
    int N=20;
    int A[N],B[N],C[N];

    // initialize arrays A and B
    for(int i=0;i<N;i++){
        A[i]=i;
        B[i]=i*2;
    }

    //pragma omp parallel for
    for(int i=0;i<N;i++){
        int tid=omp_get_thread_num();
        C[i]=A[i]+B[i];
        printf("Thread %d: %d + %d\n",tid, A[i],B[i],C[i]);
    }
    return 0;
}