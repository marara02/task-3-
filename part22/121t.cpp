#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            count++;
        }
    }
    cout<<count;
}