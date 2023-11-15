//ADM 156751
//COURSE DBIT sep-Dec 2023
//Strathmore university
#include<iostream>
using namespace std;
int main(){
    //Declare variables
    char letter;
    //ask user to input letter
    cout<<"enter letter";
    cin>>letter;
    if(!isalpha(letter)){
        cout<<"This is not a letter";
        return 1;
    }
    //use tolower function to convert the input character to lowercase 
    letter=tolower(letter);
    if (letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u')
    cout<<letter<< ","<<"is a vowel";
    else{
        cout<<letter<<"is a consonant";
    }

}