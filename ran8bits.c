#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* creates a sequence of n random numbers between 0 and MAX
 given the number n of numbers to create and the maximum value MAX */
int main(int argc, char **argv){
    unsigned long int i,n;
    double dmax;
    if (argc<3){
      fprintf(stderr,"usage:%s <n> <MAX>\n",argv[0]);
      return 1;
    }
    n=atol(argv[1]); dmax=atof(argv[2]);
    srand(time(0));
    for(i=0;i<n;i++)
      printf("%lf ",(double)(rand()/2147483647.0)*dmax);
}
