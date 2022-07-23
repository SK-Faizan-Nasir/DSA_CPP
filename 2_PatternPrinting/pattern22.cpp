#include<iostream>
/*

1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5

*/

using namespace std;

int main(){

    int n,i,j,temp;
    cin>>n;
    temp=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=temp;j++)
        {
            cout<<i<<" ";
        }
        temp-=1;
        cout<<endl;
    }
    return 0;
}