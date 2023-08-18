#include<iostream>
#include<string>
using namespace std;

char lower_case(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool palindrome(string str){
    int start = 0;
    int end = str.size()-1;
    while(start<=end){
        if(isalnum(str[start]) == 0){
            start++;
        }
        else if(isalnum(str[end]) == 0){
            end--;
        }
        else if(lower_case(str[start]) == lower_case(str[end])){
            start++;
            end--;
        }
        else{
            return false;
        }
    } 
    return true;
}

int main(){

    string str = "hE@lLo %# o$ll&eH";

    bool res = palindrome(str);

    if(res == true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }

    return 0;
}