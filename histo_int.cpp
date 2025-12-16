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
  cerr<<"nsamples: "<<stat.samples()<<endl;
  cerr<<"hmin: "<<hmin<<endl;
  cerr<<"hmax: "<<hmax<<endl;
  cerr<<"width: "<<width<<endl;
  cerr<<"min: "<<stat.min()<<endl;
  cerr<<"max: "<<stat.max()<<endl;
  cerr<<"mean: "<<stat.mean()<<endl;
  cerr<<"var: "<<stat.var()<<endl;
  cerr<<"stdDev: "<<stat.stdDev()<<endl;
  stat.printIntBuckets(cout);
  return 0;
}
