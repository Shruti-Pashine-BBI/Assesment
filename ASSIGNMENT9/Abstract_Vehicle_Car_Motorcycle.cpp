/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


 class Vehicle{
    protected:
    string make,model;
    public:
    Vehicle(){
        cout<<"Enter the Make:";
        cin>>make;
        cout<<"Enter the Model:";
        cin>>model;
    }
    void get_make(){
        cout<<make<<endl;
    }
    void get_model(){
        cout<<model<<endl;
    }
    virtual void display_info()=0;
    
};

class Car:public Vehicle{
    private:
    string fuel_type;
    public:
    Car(){
        cout<<"Enter the fuel_type:";
        cin>>fuel_type;

    }
    void get_fuel_type(){
        cout<<fuel_type<<endl;
    }
   
    void display_info(){
      cout<<"The Maker of Car is:"<<make<<" "<<"The Model is:"<<model<<" "<<"and the fuel_type is:"<<fuel_type<<endl;
     
    }
    
};

class Motorcycle:public Vehicle{
    private:
    string engine_capacity;
    public:
    Motorcycle(){
        cout<<"Enter the Engine:";
        cin>>engine_capacity;

    }
    void get_engine_capacity(){
        cout<<engine_capacity<<endl;
    }
   
    void display_info(){
      cout<<"The Maker of Motorcycle:"<<make<<" "<<"The Model is:"<<model<<" "<<"and the engine_capacity is:"<<engine_capacity<<endl;
     
      
      
    }
    
};



int main()
{
    Car obj;
    obj.get_make();
    obj.get_model();
    obj.get_fuel_type();
    
    
    
    Motorcycle obj1;
    obj1.get_make();
    obj1.get_model();
    obj1.get_engine_capacity();
    obj.display_info();
    obj1.display_info();

    return 0;
}