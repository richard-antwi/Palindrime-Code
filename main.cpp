#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
   /* int number, i;
    cout << "Please enter a number" << endl;
    cin >>number;

    /*for(int i; i<=12; i++){
        cout<<i<<"X"<<number<<"="<<i*number<<endl;
    }*/

   /* while(i<number){
        cout<<i<< " ";
        i++;
    }
    cout<<endl;*/

/*string type;
cout <<"Enter a word"<<endl;
cin >> type;

string hey= string(type.rbegin(),type.rend());

if(type==hey){
    cout<<"word is parlindrome";
}else{
cout<<"Not palindrome";
}*/


/*int number, reversee=0;
cout<<"Enter a number"<<endl;
cin>> number;

do{
    reversee= reversee*10 + number%10;
    number/=10;
}
while(number != 0);
cout<<number<<endl;
cout<<reversee<<endl;
    if(number !=reversee){
        cout<<"Number is  parlindrome"<<endl;
    }else{
    cout << "number is not parlindrome"<<endl;
    } */

    int number[5]={10,20,30,40,50};
    for(int i; i<5; i++){
        cout<<number[i]<<endl;
    }



    return 0;
}
