#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
  string par;
  int i,nsamples,nbuckets,*bucket; 
  double *limitm1,*limit;
  double hmin,hmax,width,min,max,mean,var,stddev;
  cin >> par;
  cin >> nsamples;
  cout << par << nsamples << endl;
  cin >> par;
  cin >> hmin;
  cout << par << hmin << endl;
  cin >> par;
  cin >> hmax;
  cout << par << hmax << endl;
  cin >> par;
  cin >> width;
  cout << par << width << endl;
  nbuckets=2+(hmax-hmin)/width;
  bucket=(int *)malloc(nbuckets*sizeof(int));
  limit=(double *)malloc(nbuckets*sizeof(double));
  limitm1=(double *)malloc(nbuckets*sizeof(double));
  cin >> par;
  cin >> min;
  cout << par << min << endl;
  cin >> par;
  cin >> max;
  cout << par << max << endl;
  cin >> par;
  cin >> mean;
  cout << par << mean << endl;
  cin >> par;
  cin >> var;
  cout << par << var << endl;
  cin >> par;
  cin >> stddev;
  cout << par << stddev << endl;
  for(i=0;i<nbuckets;i++){
    cin >> par;
    if((i!=(nbuckets-1))&&(i!=0)){
      limitm1[i]=limit[i-1];
      cin >> limit[i];
    }else if(i==(nbuckets-1)){
      cin >> par;
      limitm1[i]=limit[i-1];
      limit[i]=DBL_MAX;
    } else{
      limitm1[0]=-DBL_MAX;
      cin >> limit[i];
    }
    cin >> par;
    cin >> bucket[i];
    cout <<"["<<limitm1[i]<<","<<limit[i] << ") : " << bucket[i] << endl;
  }
  free(bucket);
  free(limit);
  return 0;
}
