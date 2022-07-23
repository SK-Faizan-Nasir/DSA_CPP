#include<iostream>
/*

****
*  *
*  *
****

*/

using namespace std;

int main(){
    int row,column,i,j;
    cout<<"Enter row and column: \n";
    cin>>row>>column;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        { 
            if(i==row-1 || i==0 || j==0 || j==column-1)
            {
                    cout<<"*";
            }
            else{
                cout<<" ";
                }
        }
        cout<<endl;
    }
    return 0;
}