#include <iostream>
#include <cstdlib>
#include "samplehistogram.h"
using namespace std;
int main(int argc, char *argv[]){
  if(argc<4){
    cout << "usage:"<<argv[0]<<" <min> <max> <width>"<<endl;
    return 1;
  }
  double temp,hmin,hmax,width;
  hmin=atof(argv[1]);hmax=atof(argv[2]);width=atof(argv[3]);
  SampleHistogram stat(hmin,hmax,width);
  while (cin>>temp)
    stat+=temp;
  cout<<"nsamples: "<<stat.samples()<<endl;
  cout<<"hmin: "<<hmin<<endl;
  cout<<"hmax: "<<hmax<<endl;
  cout<<"width: "<<width<<endl;
  cout<<"min: "<<stat.min()<<endl;
  cout<<"max: "<<stat.max()<<endl;
  cout<<"mean: "<<stat.mean()<<endl;
  cout<<"var: "<<stat.var()<<endl;
  cout<<"stdDev: "<<stat.stdDev()<<endl;
  stat.printBuckets(cout);
  return 0;
}
