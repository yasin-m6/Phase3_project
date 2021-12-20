#include<iostream>
#include<stdexcept>
#include"vegtebale.hpp"

vegtebale::vegtebale(int type , int x , int y)
{
    while (1)
    {
        try
        {
            set_type(type);
            break;
        }
        catch(invalid_argument & e)
        {
            cerr << e.what() << endl;
            type = get_type();
        }
        
    }
    
    this->x_address = x;
    this->y_address = y;
    veg_info();
}

vegtebale::~vegtebale()
{

}

int vegtebale::get_type()
{
    int type;
    cout << "vegtebale you can plant is :\ntomato | cabbage = 1 | tcarrot = 2 | lettuce = 4" << endl;
    cout << "what vegtebale you wanna plant ? " ;
    cin >> type;

    return type;
}

void vegtebale::set_type(int type)
{
    if (type == 1 || type == 2 || type == 3 || type == 4)
    {
        this->type = static_cast<VEG>(type);
    }
    else
    {
        throw invalid_argument("please choose a vegtebale you can plant!!!");
    }
    
    veg_info();
    
}

void vegtebale::veg_info()
{
    if(type == TOMATO)
    {
        price = 2;
        growing_date = 300;
        water_day = 80;
    }
    else if (type == CABBAGE)
    {
        price = 1;
        growing_date = 240;
        water_day = 70;
    }
    else if(type == CARROT)
    {
        price = 3;
        growing_date = 360;
        water_day = 85;
    }
    else if(type == LETTUCE)
    {
        price = 2;
        growing_date = 300;
        water_day = 20;
    }
    
}



void vegtebale::set_address(int x , int y)
{
    this->x_address = x;
    this->y_address = y;
}

int vegtebale::return_type()
{
    int veg_type = static_cast<int>(type);
    return veg_type; 
}

void vegtebale::print()
{
    cout << "vegtebale i want to plant is : " ;

    if(type == TOMATO)
    {
        cout << "tomato" << endl;
    }
    if(type == CARROT)
    {
        cout << "carrot" << endl;
    }
    if(type == CABBAGE)
    {
        cout << "cabbage" << endl;
    }
    if(type == LETTUCE)
    {
        cout << "lettuce" << endl;
    }
    
    
}