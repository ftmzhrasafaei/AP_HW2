#ifndef MAP_H
#define MAP_H
class Map
{
public:
  
  int n;
  int** arr;
  int** arr2;
  
  Map(int N,int**arr ,int**arr2);
  int sign(int k);
  void findRoute();
  void showMap();
  void showRoute();
  ~Map();
  
};
#endif
