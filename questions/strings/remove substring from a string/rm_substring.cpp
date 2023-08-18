#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "daabcbaabcbc";
    string sub_string = "abc";

    int i = 0;

    while(s.length()!=0 && s.find(sub_string) < s.length()){
        s.erase(s.find(sub_string), sub_string.length());
    }

    cout<<s;
    return 0;
}