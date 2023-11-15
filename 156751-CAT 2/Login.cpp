//ADM 156751
//COURSE DBIT sep-Dec 2023
//Strathmore university
# include <iostream>
using namespace std;
int main(){
    //Declare variables
    int password, opt;
    string username;
    //Declare the coded username and password
    password=1423;
    username="R";
    //Ask user to input their details
    cout<<"please input username";
    cin>>username;
    if(username!="R"){
        cout<<"Sorry the username does not match";}
        cout<<"please enter password";
        cin>>password;
        if(password!=1423){
            cout<<"password does not match.Cannot proceed";}
            else {

            cout<<"login successful.\n";
            cout<<"Welcome to my simple app .Select an action to perform\n";
            cout<<"\n1.Go to About us option\n2.Go to services page\n3.Go to Full profile page \n4.Logout";
            cin>>opt;
//start switch case
            switch(opt){
                case 1:cout<<"You are in about us page";
                cout<<"i am doing DBIT , I enjoy writing programs";
                break;
                case 2:cout<<"you are at service page";
                cout<<"I can creat softwares\n";
                cout<<"I can do we development";
                break;
                case 3:cout<<"you are on full profile page";
                cout<<"my name is Rhoda\n";
                cout<<"I am 20 years old. I was born in 2003.I am kenyan.I live in Nairobi .I am doing DBIT in Strathmore university.";
            cout<<"I love swimming";
            break;
//if user selects 4
            default:
            cout<<"Logout successfull";
            cout<<"Please input username and password";
            
            }
    

            }
}


