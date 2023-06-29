/*

Object-oriented programming :
Is a way of writing programs that focuses on managing our code by grouping the functions and data into objects. These objects are created using classes. Classes act just like a template or blueprint for creating objects. Objects are basically things that contain information and some functions related to that information.
For eg. If CAR is a class having variables Speed and Weight. Then we can create objects of it such as MERCEDES, VOLVO, AUDI, etc. VOLVO may have its own speed, weight as speed = 92 km/hr and weight = 1000 kg. Other CAR class objects will have different values for speed and weight.

Here we considered Class as a template and object Volvo which used this template to create themselves.

Class - Template for objects.
Object - Instance of a class.

There are somethings we should know before learning OOP,

Access Modifiers:
Those keywords used to control the accessibilty of pieces of codes (data or functions) present in class.

1) public : Public members are accessible from anywhere within the program.
2) private(By default access modifier) : This is the most restrictive access modifier. Private members are only accessible within the class they are declared in. They cannot be accessed from outside the class. 
3) protected : accessible within the class they are declared in as well as within their subclasses.

*/

#include<iostream>
using namespace std;

// Class declaration syntax 
class Car{

    
    int weight;
    // weight is a private data member (by default declared private).

    // access modifier
    public:
    int speed;
    // speed is a public data member 

};
int main(){

    // object creation syntax
    Car volvo;
    // volvo is an object of class Car

    volvo.speed = 93; // Since speed is a public variable we will be able to use it any where.
    // volvo.weight = 1000; // This statement will cause and error since weight is a private variable.

    // used . operator to access data members and assigning the values

    cout<<"Speed of volvo Car :"<<volvo.speed<<endl;
    // This is how public members are assigned values and then accessed simply using a dot operator :)

    // In next tutorial we will learn how to access private variables (which is done using getters and setters) outside the class.

    return 0;
}