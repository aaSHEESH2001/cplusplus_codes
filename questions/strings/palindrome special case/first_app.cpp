#include<iostream>
#include<string>
using namespace std;

int palindrome(string str){
    int start = 0;
    int end = str.size() - 1;
    while(start<= end){
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int string_conversion(char str[], int size){
    string dup_string;
    int i = 0;
    while(i < size){
        if(str[i] >= 48 && str[i] <= 57){
            dup_string.push_back(str[i]);
            i++;
        }
        else if(str[i] >= 97 && str[i] <= 122){
            dup_string.push_back(str[i]);
            i++;
        }
        else if(str[i] >= 65 && str[i] <= 90){
            dup_string.push_back(str[i] + 32);
            i++;
        } 
        else{
            i++;
        }
    }
    int result = palindrome(dup_string);
    return result;
}

int string_len(char str[]){
    int i = 1;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}


int main(){

    char str[50] = "L123  #@%$ets  go";

    int size = string_len(str);

    int result =  string_conversion(str,size);

    if(result == 0){   
        cout<<"Not a palindrome ";
    }
    else{
        cout<<"The string is a palindrome";
    }

    return 0;
}