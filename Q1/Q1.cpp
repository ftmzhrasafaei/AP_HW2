#include <iostream>
#include "Map.h"

int main()
{
  std::cout<<"What is the size of Map?!"<<std::endl;
  int m{};
  //getting input number
  std::cin>>m;
  //defining arrays
    int** arr{new int*[m]};
  for(int q{};q<m;q++)
    arr[q]=new int[m];
  
  int** arr2{new int*[m]};
  for(int q{};q<m;q++)
    arr2[q]=new int[m];
  //an object of Map class   
  Map way{m,arr,arr2};
  //calling function
  way.findRoute();
  
  //set free the memory
  for(int q{};q<m;q++)
    delete[] arr[q];
  delete[] arr;
  
  for(int q{};q<m;q++)
    delete[] arr2[q];
  delete[] arr2;

  return 0;
}


