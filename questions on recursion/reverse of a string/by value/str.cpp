#include<iostream>
using namespace std;

string printReverse(string str, int i, int j){
    if(i > j){
        return str;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    string res = printReverse(str,i,j);

    return res;
}

int main(){

    string str = "Hello World";

    cout<<"String is : "<<str<<endl;

    int size = str.size();

    string res = printReverse(str,0,size-1);

    cout<<endl<<"Reversed string is : "<<res;

}