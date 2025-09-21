#include <iostream>
#include "samplestatistic.h"
using namespace std;
int main(int argc, char *argv[]){
  SampleStatistic stat;
  double temp;
  while (cin>>temp)
    stat+=temp;
  cout<<"min: "<<stat.min()<<endl;
  cout<<"max: "<<stat.max()<<endl;
  cout<<"mean: "<<stat.mean()<<endl;
  cout<<"var: "<<stat.var()<<endl;
  cout<<"stdDev:: "<<stat.stdDev()<<endl;

  return 0;
}
