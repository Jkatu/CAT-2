//ADM 156751
//COURSE DBIT sep-Dec 2023
//Strathmore university
# include <iostream>
using namespace std;
int main(){
   int  num1, num2, num3, minNum ,min;
    //input first number
    cout<<"Enter first number";
    cin>>num1;
    //input second number
    cout<<"Enter second number";
    cin>>num2;
    cout<<"Enter third number";
    cin>>num3;
    
    //start switch case
    switch(minNum)
    { 
        case 1:
        if (num2<num1 && num2<num3) min=num2;
        break;
        case 2:
        if(num1<num2 && num1<num3)min=num1;
        break;
        default:
        if(num3<num1 && num3<num2) min=num3;
        break;

    }
    //Give the outut

      cout<< "Minimum Number of"<<num1<<","<<num2 << "and"<<num3<<" is "<<min<<endl;
}


