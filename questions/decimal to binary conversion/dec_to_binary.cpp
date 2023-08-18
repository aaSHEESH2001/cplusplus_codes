#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num = 6;
    int i = 0;
    int ans = 0;
    while(num != 0){
        int bit = num % 2;
        cout<<"Bits : "<<bit<<endl;
        ans = (bit * pow(10,i)) + ans;
        cout<<"Ans : "<<ans<<endl;
        num = num / 2;
        cout<<"Num : "<<num<<endl;
        i++;
        cout<<"I : "<<i<<endl;
    }

}