#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,string> memory;
    string user_input;

    // turning user_input into lowercase
    transform(user_input.begin(),user_input.end(),user_input.begin(),::tolower);
    // 
}