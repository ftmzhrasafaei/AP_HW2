#include <iostream>
#include <vector>
#include <ctime>
#include "libArr.h"


long long libArr::counter(long long n)
{
  long long count{};
  long long* arr{new long long[n]};
  for(int i{}; i<n;i++)
    {
      arr[i]=i;
      count=count+arr[i];
    }
  return count;
}
