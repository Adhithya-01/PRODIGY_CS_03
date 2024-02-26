#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i=0,temp,t1,t2,t3;
    string pas;
    t1=t2=t3=0;
    cout<<"---------------- Password Complexity Checking Tool -----------------"<<endl;
    cout<<"Enter the password : ";
    cin>>pas;
    if(pas.size()>12)
        temp=1;
    else 
        temp=0;
    while(i<pas.size())
    {
        if(isupper(pas[i]) && t1==0)
        {
            temp+=1;
            t1=1;
        }
        else if(isdigit(pas[i]) && t2==0)
        {
            temp+=1;
            t2=1;
        }
        else if(not isalnum(pas[i]) && t3==0)
        {
            temp+=1;
            t3=1;
        }
        i++;
    }
    if(temp==4)
        cout<<"Password Level : Very Strong";
    else if(temp==3)
        cout<<"Password Level : Strong";
    else if(temp==2)
        cout<<"Password Level : Moderate";
    else
        cout<<"Password Level : Weak";
    cout<<endl<<"---------------- Tips to improve your password ----------------"<<endl;
    if(pas.size()<12)
        cout<<"Password should atleast have a 12+ characters."<<endl;
    if(t1==0)
        cout<<"Password should atleast have a UPPER characters."<<endl;
    if(t2==0)
        cout<<"Password should atleast have a Number."<<endl;
    if(t3==0)
        cout<<"Password should atleast have a Special characters."<<endl;
    return 0;
}