#include <iostream>
#include <string>

using namespace std;

int main(){
    int age,Height,Pro;
   
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 20)
    {
        cout << "Enter your height: ";
        cin >> Height;

        if(Height < 160)
        {
            cout <<"Your status = UNFRIEND";
        }
        else if(Height < 175)
        {
             cout <<"Your status = FRIEND";
        }
        else
        {

           cout << "Enter your property: "; 
           cin >> Pro;

           if(Pro > 69e6)
           {
                cout <<"Your status = MARRIED";
           }
           else
           {
                cout <<"Your status = ONE-NIGHT-STAND";
           }

        }
    }
    else if (age < 30)
    {
        cout << "Enter your property: "; 
        cin >> Pro;
        if(Pro > 10e6)
        {
             cout <<"Your status = BEST FRIEND";
        }
        else
        {
             cout <<"Your status = UNFRIEND";
        }
    }
    else
    {
        cout << "Your status = UNFRIEND";
    }

    return 0;

}