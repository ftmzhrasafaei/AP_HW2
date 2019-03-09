#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>



int main()
{
  char c{} ; //character for getting char
  std::string line{}; //string for counting lines
  int count{}; // number of lines
  std:: ifstream in; //opening db.txt
  in.open("db.txt");
  
  //counting lines
  while(getline(in,line))
    count++;
  //array for storing file
  char arr[count][22]{}; 
  in.close();
  
  std::ifstream inn;
  inn.open("db.txt");
   
  //geting strings line by line and deleting [ , ] and spaces
  for(int i{}; i<count;i++)
    {
      for(int j{};j<22;j++)
	{
	  inn>>c;
	  if(c != ']'&& c!='[') 
	    arr[i][j]=c;
	  else
	    j--;
	}
    }
  
  inn.close();
  std::cout<<" We got your data successfully !"<<std::endl;
  
  char days[count][11]{}; //array for storing days
  char products[count][4]{}; //array for storing products id
  char customers[count][5]{}; //array for storing customers id
  //spliting days of lines
  for(int i{};i<count;i++)
    {
      for(int j{};j<10;j++)
	{
	  days[i][j]=arr[i][j];
	  //   std::cout<< days[i][j];
	}
      //  std::cout<<std::endl;
      days[i][10]='\n';
    }
  //display dayss array
  /* 
     for(int i{};i<count;i++)
     {
     daysss[i]=arr[i];
     std::cout<<daysss[i]<<std::endl;
     }
     
  */
       
  // spliting products id of lines
  for(int i{};i<count;i++)
    {
      for(int j{};j<3;j++)
	{
	  products[i][j]=arr[i][j+15];
	  //  std::cout<<products[i][j];
	}
      // std::cout<<std::endl;
      products[i][3]='\n';
    }
  
  //spliting customers id of lines
  for(int i{};i<count;i++)
    {
      for(int j{};j<4;j++)
	{
	  customers[i][j]=arr[i][j+18];
	  //  std::cout<<customers[i][j];
	}
      // std::cout<<std::endl;
      customers[i][4]='\n';
    }
      
  //storing  days with repetition
  std::string day[count]{};
  //storing days without repetition
  std::string dayss[count]{};
  //storing customer id to srting array
  std::string customer[count]{};
  //storing product id to string array
  std::string product[count]{};
      
  //      converting char** to string*
  std::stringstream ssin(days[0]);
  std::stringstream ssin1(customers[0]);
  std::stringstream ssin2(products[0]);
      
  for(int i{}; ssin.good()&&i<count;i++)
    ssin>>day[i];
      
  for(int i{}; ssin1.good()&&i<count;i++)
    ssin1>>customer[i];
      
  for(int i{}; ssin2.good()&&i<count;i++)
    ssin2>>product[i];

  //display data 
  /*
    for(int j{};j<count;j++){
    std::cout<<day[j]<<" : "<<customer[j]<<" : "<<product[j];
    
    std::cout<<std::endl;
    }
  */
	 
	
  int j{}, u{};
  //counting customers without repetition
  int customercounter[count]{};
  //counting products without repetition
  int productcounter[count]{};
  //storing 1 for defult counter
  for(int i{};i<count;i++)
    {
      customercounter[i]=1;
      productcounter[i]=1;
    }

		  
  while(j+u+1<count){
    dayss[u]=day[u];
    //compairing days
    if(day[u]==day[u+j+1]){
      //deleting repeated element
      dayss[u+j+1]='\n';
      //comparing customer id
      if(customer[u]==customer[u+j+1])
	{
	  
	  //deleting repetition
	  customercounter[u+j+1]=0;
	}
      else
	{
	  //adding new customer count
	  
	  customercounter[u]++;
	  customercounter[u+j+1]=0;
	}
	      
      
      //like customers
      if(product[u]==product[u+j+1])
	{
	  
	  productcounter[u+j+1]=0;
	  
	}
      else
	{
	
	  productcounter[u]++;
	  productcounter[u+j+1]=0;

	}
	     
      j++;
	   
    }
	    
    else
      {
	dayss[u+j+1]=day[u+j+1];
	u=u+j+1;
	
	j=0;
      }
    
  }
	       
  
  std::cout<<std::endl;	  



  /*
    for(auto x:customercounter)	
    std::cout<<x<<",";
    std::cout<<"pro"<<std::endl;
    for(auto x:productcounter)
    std::cout<<x<<",";
    std::cout<<std::endl;
  */

  //writing in file
  std::ofstream out{"dbnew.txt"};
  int z{};
  while(z<count)
    {
      if(dayss[z]!="\n")
	{
	  out<<"["<<dayss[z]<<"]"<<" "<<customercounter[z]<<" "<<productcounter[z]<<std::endl;
	}
      z++;
    }
	  
  out.close();  

  std::cout<<" Your new data base is ready and saved in 'dbnew.txt'"<<std::endl;
  return 0;
}
