#include<iostream>

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

using namespace std;

int main(){
    int n,temp,i,j;
    cin>>n;

for(i=1; i<=(2*n)-1; i++)
  {
      temp = n;
      for(int j=1; j<=(2*n)-1; j++)
      {
          cout<<temp<<" ";
          if(j<i){
              temp--;
          }
          if(j>((2*n)-1-i)){
            temp++;
      }

      }
      cout<<"\n";
  }

    
    return 0;
}