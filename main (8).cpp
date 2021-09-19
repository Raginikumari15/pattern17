#include <iostream>
using namespace std;
int main()
{
    
    int N;
    cin >>N;
    int i=1;
    int j,k;
    while(i<=N){
        j=1;
        k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
        //k=i;
        
    }
}
      