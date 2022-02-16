#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter a number for base : ";
    cin>>n;
    int m;
    cout<<"Please Enter a number for power : ";
    cin>>m;
    int counter =1 , result = 1;
    while(counter <= m){
        result *= n;
        counter++;
    }
    cout<<n<<" be tavan "<<m<<" = "<<result<<endl;
    return 0;
}