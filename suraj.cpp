#include <iostream>
using namespace std;

int main()
{
  cout<<"input a number of coumb for the                 pattern"<<endl;
   int A;
   cin>>A;
   for(int i=0;i<A;i++)
        {
          for(int j=0;j<(A-(1+2i))÷2;j++) 
              {
              cout <<" ";
          }
          for(int j=0;j<(i-((A-1)÷2));j++)
              {
              cout<<" ";    
          }      
          for(int j=1;j<2(1+i);j++) 
              {
               cout<<"*";    
          }
          for(int j=0;j<(((A-i)2)-1);j++)              {
               cout<<"*";   
          }  
    cout<<endl;        
    }
    return 0;
}