#include <iostream>
#include <vector>
#include <ctime>
#include "libVec.h"

long long libVec:: counter(long long n)
{
  long long count{};
  std::vector<long long>vec;
  for(int i{}; i<n;i++)
    {
      vec.push_back(i);
      count=count+vec[i];
    }
  return count;
}
