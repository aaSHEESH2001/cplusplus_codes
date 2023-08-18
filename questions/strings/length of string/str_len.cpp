#include<iostream>
using namespace std;

int string_len(char str[]){
    int i = 1;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){

    char str[20];

    cout<<"Enter the string : ";
    cin>>str;

    int len = string_len(str);
    cout<<"Length of the string is : "<<len;
}