#include<iostream>
using namespace std;
int main(){
    char message[100],ch;
    int key;
    cout<<"Enter Message : ";
    cin.getline(message,100);
    // cout<<"\n"<<message;
    cout<<"Enter Key : ";
    cin>>key;
    cout<<"Message : "<<message<<endl;
    for(int i=0 ; message[i] != 0 ; i++){
        ch = message[i];
        if(ch>='a' && ch<='z'){
            ch = ch + key;
            if(ch>'z'){
                ch = ch -'z'+'a'-1;
            }
            message[i]=ch;
        }
        else if(ch>='A' && ch<='Z'){
            ch = ch + key;
            if (ch>'Z'){
                ch = ch-'Z'+'A'-1;
            }
            message[i]=ch;
        }
    }
    cout<<"Incrypted : "<<message<<endl;;
}