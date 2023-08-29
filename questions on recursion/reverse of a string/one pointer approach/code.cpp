#include<iostream>
using namespace std;

string printReverse(string str, int i){
    if(i > str.size()-i){
        return str;
    }
    swap(str[i],str[str.size()-i-1]);
    i++;
    string res = printReverse(str,i);

    return res;
}

int main(){

    string str = "Hello World";

    cout<<"String is : "<<str<<endl;

    int size = str.size();

    string res = printReverse(str,0);

    cout<<endl<<"Reversed string is : "<<res;

}