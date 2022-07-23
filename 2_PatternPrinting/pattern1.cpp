#include<iostream>
/*

****
****
****
****

*/

using namespace std;
//method1
// int main(){
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<4;j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }


//method2
// int main(){

//     for(int i=0;i<5;i++)
//         cout<<"****"<<endl; 
//     return 0;
// }

//method3

int main(){
    int s,e,i,j;
    cout<<"Enter i and j:\n";
    cin>>s>>e;
    for(i=0;i<s;i++)
    {
        for(j=0;j<e;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}