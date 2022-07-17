#include <bits/stdc++.h>
using namespace std;
bool checkVowel(char s){
    return(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='y');
}
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        
        if(!checkVowel(s[i])){
            cout<<"."<<s[i];
        }
    }
    return 0;
}