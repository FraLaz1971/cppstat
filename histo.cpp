#include <iostream>
#include <cstdlib>
#include "samplehistogram.h"
using namespace std;
int main(int argc, char *argv[]){
  if(argc<4){
    cout << "usage:"<<argv[0]<<" <min> <max> <step>"<<endl;
    return 1;
  }
  SampleHistogram stat(atof(argv[1]),atof(argv[2]),atof(argv[3]));
  double temp;
  while (cin>>temp)
    stat+=temp;
  cout<<"min: "<<stat.min()<<endl;
  cout<<"max: "<<stat.max()<<endl;
  cout<<"mean: "<<stat.mean()<<endl;
  cout<<"var: "<<stat.var()<<endl;
  cout<<"stdDev:: "<<stat.stdDev()<<endl;
  stat.printBuckets(cout);
  return 0;
}
