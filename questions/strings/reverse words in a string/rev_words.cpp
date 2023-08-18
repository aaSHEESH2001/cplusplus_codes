#include<iostream>
#include<string>
using namespace std;

string rev_char(string c){
    int start = 0;
    int end = c.size()-1;
    while(start<=end){
        swap(c[start],c[end]);
        start++;
        end--;
    }
    return c;
}

string check_string(string s){
    string c;
    string rev_string;
    for(int i = 0; i < s.size(); i++){
        if(isalnum(s[i])){
            c.push_back(s[i]);
        }
        else{
            rev_string.append(rev_char(c));
            rev_string.append(" ");
            c.clear();
        }
    }
    rev_string.append(rev_char(c));
    return rev_string;
}

int main(){

    string s = "Hello World";

    string rev = check_string(s);

    cout<<rev;
    
    return 0;
}