// getters,setters and basics

// getters are basically for fetching values 
// setters are for manipulating those values and applying conditions 

// getters setters aremostly used for private variables

// The principle :
/*  Declare getter and setter functions in public mode so that the
 data members can be accessed within class and a user can access these private variables indirectly using getter and setter functions */

#include<iostream>
using namespace std;
int main(){

    class Car{
        // property

        // by default this varibles/prop are private 
        // hence we cant access this varibles

        private:
        int Speed;
        
        public:
        char level;

        int getSpeed(){
            return Speed;
            // getter1
        }

        char getlevel(){
            return level;
            // getter2
        }

        void setSpeed(int h){
                Speed = h;
                //setter1
        }

        void setlevel(char ch){
            level = ch;
            //setter2
        }

    };

    // creating object of class Hero
    Car volvo;

    // cout<<sizeof(Car)<<endl;
    // ans -> 4
    // for empty class size is 1 byte

    // cout<<volvo.Speed<<endl;
    // cout<<volvo.level<<endl; -> not allowed when level is private

    // h1.Speed = 10;
    volvo.level = 'a';

    // cout<<volvo.getSpeed()<<endl; /* --> garbage value dega pehle as we didnt set any value for it*/
    volvo.setSpeed(50); 
    // --> sets speed


    cout<<volvo.getSpeed()<<endl;
    // in set we assign the values
    // cout<<volvo.level<<endl;


    return 0;
}