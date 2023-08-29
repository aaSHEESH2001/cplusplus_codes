#include<iostream>
#include<string>
using namespace std;
                
                //Pointer to char array
void printReverse(char str[] , int i, int j){
    if(i > j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    printReverse(str,i,j);

    return ;
}

int main(){

    char str[] = "World";


    cout<<"String is : "<<str;

    printReverse(str,0,4);

    cout<<endl<<"Reversed string is : "<<str;

}