#include<iostream>
using namespace std;

void rev_string(char str[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(str[start++],str[end--]);
    }
}

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
    int length = string_len(str);
    rev_string(str,length);
    cout<<"Reversed string : ";
    cout<<str;

}