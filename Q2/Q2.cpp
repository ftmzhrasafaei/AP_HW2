#include <iostream>
#include <vector>
#include <ctime>
#include "libArr.h"
#include "libVec.h"

template <typename T, typename T2> 

void runTime(T obj, T2 ptr,long long m);

int main()
{
  libVec a;// an object of libVec class
  libArr b;//an object of libArr class
  long long n{1};//first input for counter function
  //pointer to member function 
  long long(libVec::*ptr1)(long long)=&libVec::counter;
  long long(libArr::*ptr2)(long long)=&libArr::counter;
  
  while(n<100000000)
    {
      std::cout<<std::endl;
      std::cout<<"====== "<<n<<" is the size of array and vector======  "<<std::endl;
      std::cout<<"For libArr class"<<std::endl;
      runTime(b,ptr2,n);

      std::cout<<std::endl;

      std::cout<<"For libVec class"<<std::endl;
      runTime(a,ptr1,n);
      std::cout<<std::endl;
      n*=10;
    }
  
  return 0;
}


//function for calculating time


template <typename T, typename T2> 

void runTime(T obj, T2 ptr,long long m)
{
  long long count{};
  //start time
  double start_t1=clock();
  //pointer to member function 
  count=(obj.*ptr)(m);
  //printing result of counter
  std::cout<<" The result of counter function is : "<<count<<std::endl;
  //end of time
  double stop_t1=clock();
  //printing runtime
  std::cout<<"RunTime: "<<((stop_t1-start_t1)/double(CLOCKS_PER_SEC))*1000<<" milli secends"<<std::endl;

}
