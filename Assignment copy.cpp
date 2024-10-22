#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,Failedsubjects=0;;
    float result;
    bool Grace=false;
    while (true)
    {
        cout<<"Enter marks for  DCF:";
        cin>>a;
        if (a<0||a>100)
        {
            cout<<"Invaild Marks Entered for subject DCF"<<endl;
        }
        else
        {
            break;
        }
    }
    while(true)
    {
        cout<<"Enter marks for  UXD:";
        cin>>b;
        if (b<0||b>100)
        {
            cout<<"Invaild Marks Entered for subject UXD"<<endl;
        }
        else
        {
            break;
        }  
        }
    while(true)
    {
        cout<<"Enter marks for DBMS:";
        cin>>c;
        if (c<0||c>100)
        {
           cout<<"Invaild Marks Entered for subject DBMS"<<endl;
        }
        else
        {
            break;
        }  
    }
    while(true)
    {
        cout<<"Enter marks for OOP:";
        cin>>d;
        if (d<0||d>100)
        {
            cout<<"Invaild Marks Entered for subject OOP"<<endl;
        }
        else
        {
            break;
        } 
    }
    while(true)
    {
        cout<<"Enter marks for WA:";
        cin>>e;
        if (e<0||e>100)
        {
            cout<<"Invaild Marks Entered for subject WA"<<endl;
        }
        else
        {
            break;
        } 
    }
    if (a<50)
        {
            Failedsubjects++;
        }
    if (b<50)
        {
            Failedsubjects++;
        }
    if (c<50)
        {
            Failedsubjects++;
        }
    if (d<50)
        {
            Failedsubjects++;
        }
    if (e<50)
        {
            Failedsubjects++;
        }
if (Failedsubjects == 1)
{
    if (a < 50 && a >= 47)
    {
        cout << "You have passed with a grace of " << 50 - a << " marks in subject DCF" << endl;
        Failedsubjects = 0;
        a=50;
        Grace=true;
    }
    else if (b < 50 && b >= 47)
    {
        cout << "You have passed with a grace of " << 50 - b << " marks in subject UXD" << endl;
        Failedsubjects = 0;
        b=50;
        Grace=true;
    }
    else if (c < 50 && c >= 47)
    {
        cout << "You have passed with a grace of " << 50 - c << " marks in subject DBMS" << endl;
        Failedsubjects = 0;
        c=50;
        Grace=true;
    }
    else if (d < 50 && d >= 47)
    {
        cout << "You have passed with a grace of " << 50 - d << " marks in subject OOP" << endl;
        Failedsubjects = 0;
        d=50;
        Grace=true;
    }
    else if (e < 50 && e >= 47)
    {
        cout << "You have passed with a grace of " << 50 - e << " marks in subject WA" << endl;
        Failedsubjects = 0;
        e=50;
        Grace=true;
    }
    else
    {
        cout<<"Sorry can't Help … Try For Supplementary"<<endl;
    }
}
    
    result=((a+b+c+d+e)*100.0)/500;
    if (Failedsubjects==0 && result>=70 && Grace==false)
    {
        cout<<"You have scored "<<result<< "% and Passesd with First Division"<<endl;
    }
    else if (Failedsubjects==0 && (result>=60 && result<70) && Grace==false)
    {
        cout<<"You have scored "<<result<<"% and Passesd with Second Division"<<endl;
    }
    else if (Failedsubjects==0 && (result>=50 &&result<60) && Grace==false)
    {
        cout<<"You have scored "<<result<< "% and Passesd with Third Division"<<endl;
    }
    else if (Failedsubjects==0 && Grace==true)
    {
        cout<<"You have passed with Grace"<<endl;
    }
    else if(Failedsubjects>1)
    {
        cout<<"you have successfully failed"<<endl;
    } 
}