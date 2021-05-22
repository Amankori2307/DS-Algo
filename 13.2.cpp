#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// String Functions
int main(){
    string s1 = "Aman";
    string s2 = " Kori";

    cout<<s1+s2<<endl;

    s1.append(s2);
    cout<<s1<<endl;

    // Access Character Using Index
    cout<<s1[1]<<endl;

    // Clear
    string abc = "nothing";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;
    
    // string compare
    string str1 = "abc";
    string str2 = "xyz";

    cout<<str2.compare(str1)<<endl;
    cout<<str2.compare(str2)<<endl;
    cout<<str1.compare(str2)<<endl;

    // check if string is empty
    string e = "nothing";
    if(e.empty()){
        cout<<"String is empty"<<endl;
    }else{
        cout<<"String is not empty"<<endl;
    }
    e.clear();
    if(e.empty()){
        cout<<"String is empty"<<endl;
    }else{
        cout<<"String is not empty"<<endl;
    }


    // Erase
    string str3 = "nincompoop";
    cout<<str3<<endl;
    str3.erase(6, 4);
    cout<<str3<<endl;

    // Search For Substring
    cout<<str3.find("com")<<endl;
    cout<<str3.find("aman")<<endl;


    // Insert into string
    string str4 = "A kori";
    str4.insert(1, "man");
    cout<<str4<<endl;

    // String length
    string str5 = "Kunal Kori";
    cout<<str5.length()<<endl;
    cout<<str5.size()<<endl;

    for(int i=0; i<str5.length(); i++){
        cout<<str5[i];
    }
    cout<<endl;

    // Substr
    string str6 = "Aman kori";
    cout<<str6.substr(0,4)<<endl;
    
    // Numeric string
    string num = "124124";
    int x = stoi(num);
    cout<<x<<endl;

    string numcopy = to_string(x);
    cout<<numcopy<<endl;

    // Sort a string
    string str7 = "maafjafjalfjlafhasdjfkhakjfls";
    sort(str7.begin(), str7.end());
    cout<<str7<<endl;

    return 0;
}