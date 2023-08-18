#include <iostream>
using namespace std;

void reverseStringWordWise(string input)
{   
    char word[20];
    for(int i = 0; input[i] != '\0'; i++){
        int j = 0;
        if(input[i] != ' '){
            word[j] = input[i];
            j++;
        }
        else{
            cout<<word<<endl;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    reverseStringWordWise(s);
}