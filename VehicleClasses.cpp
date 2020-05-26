#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

//Class that holds variables for make, year, mileage, and price of a vehicle.
class Vehicle
{
    public:
        string make;
        int year;
        int mileage;
        int price;
        
        void setMake(string x)
        {
            make =x;
        }
        
        void setYear(int x)
        {
            year =x;
        }
        
        void setMileage(int x)
        {
            mileage =x;
        }
        
        void setPrice(int x)
        {
            price =x;
        }
        
        string getMake()
        {
            return make;
        }
        
        int getYear()
        {
            return year;
        }
        
        int getMilage()
        {
            return mileage;
        }
        
        int getPrice()
        {
            return price;
        }
};

//Derived class from Vehicle that holds variables for model and three features.
class Car: public Vehicle
{
    public: 
        string model;
        string feature1;
        string feature2;
        string feature3;
        
        void setModel(string x)
        {
            model =x;
        }
        
        void setFeature1(string x)
        {
            feature1 =x;
        }
        
        void setFeature2(string x)
        {
            feature2 =x;
        }
        
        void setFeature3(string x)
        {
            feature3 =x;
        }
        
        string getModel()
        {
            return model;
        }
        
        string getFeature1()
        {
            return feature1;
        }
        
        string getFeature2()
        {
            return feature2;
        }
        
        string getFeature3()
        {
            return feature3;
        }
        
        string toString()
        {
            std::string s =std::to_string(year);
            
            string x =s+" | "+make+" | "+model;
            return x;
        }
};

//Derived class from Vehicle and adds variables for model and three features.
class Truck: public Vehicle
{
    public:
        string model;
        string feature1;
        string feature2;
        string feature3;
        
        void setModel(string x)
        {
            model =x;
        }
        
        void setFeature1(string x)
        {
            feature1 =x;
        }
        
        void setFeature2(string x)
        {
            feature2 =x;
        }
        
        void setFeature3(string x)
        {
            feature3 =x;
        }
        
        string getModel()
        {
            return model;
        }
        
        string getFeature1()
        {
            return feature1;
        }
        
        string getFeature2()
        {
            return feature2;
        }
        
        string getFeature3()
        {
            return feature3;
        }
        
        string toString()
        {
            std::string s =std::to_string(year);
            
            string x =s+" | "+make+" | "+model;
            return x;
        }
};

//Derived class from Vehicle that add variables for model and three features
class SUV: public Vehicle
{
    public:
        string model;
        string feature1;
        string feature2;
        string feature3;
        
        void setModel(string x)
        {
            model =x;
        }
        
        void setFeature1(string x)
        {
            feature1 =x;
        }
        
        void setFeature2(string x)
        {
            feature2 =x;
        }
        
        void setFeature3(string x)
        {
            feature3 =x;
        }
        
        string getModel()
        {
            return model;
        }
        
        string getFeature1()
        {
            return feature1;
        }
        
        string getFeature2()
        {
            return feature2;
        }
        
        string getFeature3()
        {
            return feature3;
        }
        
        string toString()
        {
            std::string s =std::to_string(year);
            
            string x =s+" | "+make+" | "+model;
            return x;
        }
};

//method that compares the price of two vehicles
void comparePrice(int x, int y)
{
    cout<<"First Price: "<<x<<" Second Price: "<<y<<endl;
}

//Class that is a Demo for the previous classes.
int main()
{
    Truck one;
    Car two;
    SUV three;
    
    //creation of three vehicle objects
    one.setMake("Ford");
    one.setModel("F-150");
    one.setMileage(350);
    one.setPrice(50000);
    one.setYear(2020);
    one.setFeature1("Heated Seats");
    one.setFeature2("60 inch lift kit");
    one.setFeature3("Apple Carplay");
    
    two.setMake("John Deere");
    two.setModel("E110");
    two.setMileage(160000);
    two.setPrice(20);
    two.setYear(1993);
    two.setFeature1("Heated Seat");
    two.setFeature2("0 to 60 in 3.6 seconds");
    two.setFeature3("Apple Carplay");
    
    three.setMake("Cheverolet");
    three.setModel("Tahoe");
    three.setMileage(250000);
    three.setPrice(300);
    three.setYear(1999);
    three.setFeature1("Cassette Player");
    three.setFeature2("Four wheel drive");
    three.setFeature3("Roof Rack");
    
    //output of vehicle objects
    cout<<one.toString()<<endl;
    cout<<two.toString()<<endl;
    cout<<three.toString()<<endl;
    
    //prompt for vehicle objects
    cout<<"What two would you like to compare?(1, 2, 3)"<<endl;
    int choice1;
    int choice2;
    cin>>choice1;
    cin>>choice2;
    
    //gets user requested vehicle objects 
    int price1;
    int price2;
    if(choice1 == 1)
    {
        price1 =one.getPrice();
        cout<<one.getFeature1()<<" | "<<one.getFeature2()<<" | "<<one.getFeature3()<<endl;
    }
    
    else if(choice1 == 2)
    {
        price1 =two.getPrice();
        cout<<two.getFeature1()<<" | "<<two.getFeature2()<<" | "<<two.getFeature3()<<endl;
    }
    
    else if(choice1 == 3)
    {
        price1 =three.getPrice();
        cout<<three.getFeature1()<<" | "<<three.getFeature2()<<" | "<<three.getFeature3()<<endl;
    }
    
    else
    {
        cout<<"You are supposed to enter a number 1-3.";
    }
    
    if(choice2 == 1)
    {
        price2 =one.getPrice();
        cout<<one.getFeature1()<<" | "<<one.getFeature2()<<" | "<<one.getFeature3()<<endl;
    }
    
    else if(choice2 == 2)
    {
        price2 =two.getPrice();
        cout<<two.getFeature1()<<" | "<<two.getFeature2()<<" | "<<two.getFeature3()<<endl;
    }
    
    else if(choice2 == 3)
    {
        price2 =three.getPrice();
        cout<<three.getFeature1()<<" | "<<three.getFeature2()<<" | "<<three.getFeature3()<<endl;
    }
    
    else
    {
        cout<<"You have to enter number 1-3";
    }
    
    //comparison and output of prices selected by user
    comparePrice(price1, price2);
    
    return 0;
}
