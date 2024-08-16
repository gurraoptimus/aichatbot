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
    // welcome message for the bot
    cout<<"Welcome uesr, i'm a chatbot"<<endl;

    // our chat functionailty
    while(true){
        // getting user input
        getline(cin,user_input);
        // turning user_input into lowercase
        transform(user_input.begin(),user_input.end(),user_input.begin(),::tolower);
        
        if(user_input=="hi"||user_input=="hello"||user_input=="hey"){
            cout<<"Hello user, how can i help you?"<<endl;
        }else if(user_input=="how are you"||user_input=="how are you ok"){
            cout<<"As a chatbot i have no emotional states"<<endl;
        }else if(user_input=="what's my name"){
            if(memory.find("name")!=memory.end()){
                cout<<"your name is "<<memory["name"]<<endl;
            }else{
                cout<<"Sorry you didn't tell me your name yet. Tell me your name"<<endl;
            }
        }else if(user_input.find("my name is")!=string::npos){
            size_t pos = user_input.find("")
        }
    }
}