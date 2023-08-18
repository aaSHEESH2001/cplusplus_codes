#include<iostream>
#include<string>
using namespace std;

// int main(){

// 	string s = "Coding Ninjas is a coding platform";
// 	string mod_str;
// 	for(int i = 0; i < s.size(); i++){
// 		char ch = s[i];
// 		if(ch == ' '){
// 			mod_str = mod_str + "@40";
//             //mod_str.push_back('@');
//             //mod_str.push_back('4');
//             //mod_str.push_back('0');
// 		}
// 		else{
// 			mod_str = mod_str + ch;
//             //mod_str.push_back(ch);
// 		}
// 	}

//     cout<<mod_str;

//     return 0;
// }

//-------------------------------------------------------------------
//                      Not using extra space
//-------------------------------------------------------------------

int main(){

	string s = "Coding Ninjas is a coding platform";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            cout<<s[i];;
            //Nothing for now
        }
    }

    return 0;
}