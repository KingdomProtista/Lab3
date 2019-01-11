#include <iostream>
using namespace std;
    int main()
    {
        int x=2;
        float sum;
        while(x<70){
            x=x+1;
            sum=1/x+sum;
        }
        cout<<sum;
        return 0;
    }