#include<iostream>
using namespace std;
int main()
     {
       int age;
       cout<<"enter your age:";
       cin>>age;
       if(age>=18)
       {
       cout<<"you are eligible for marriage:";
       }
       else
       {
       cout<<"you are not ligible for marriage:";
       cout<<"wait for"<<18-age<<"year(s):";
       }
       
     }
