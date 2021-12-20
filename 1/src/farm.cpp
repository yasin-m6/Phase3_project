#include<iostream>
#include<new>
#include"farm.hpp"

farm::farm(int length , int width)
{
    while (1)
    {
        try
        {
            set_length(length);
            break;
        }
        catch(invalid_argument & e)
        {
            cerr << e.what() << endl;
            length = get_length();
        }
        
    }

    while (1)
    {
        try
        {
            set_width(width);
            break;
        }
        catch(invalid_argument & e)
        {
            cerr << e.what() << endl;
            width = get_width();
        }
        
    }

    yourfarm.resize(length);

    for (size_t i = 0; i < length; i++)
    {
        yourfarm[i].resize(width);
    }
    
    
}


int farm::get_length()
{
    int num;
    cout << "please Enter length of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_length(int num)
{
    if(num > 0)
    {
        length = num;
    }
    else
    {
        throw invalid_argument("legnth of your farm has to be a positive number :(");
    }

    return length;
}

int farm::get_width()
{
    int num;
    cout << "please Enter width of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_width(int num)
{
    if(num > 0)
    {
        width = num;
    }
    else
    {
        throw invalid_argument("width of your farm has to be a positive number :(");
    }
    return width;
}

bool farm::check_address(int x , int y)
{
    if (x >= 0 && x <= length)
    {
        if (y >= 0 && y <= width)
        {
            return true;
        }

        cerr << "x has to be between 0 and " << length << endl;
        return false;
    }

    cerr << "y has to be between 0 and " << width << endl;
    return false;
    
}

void farm::plant(int type , int x , int y)
{
    yourfarm[x][y] = type;
}

void farm::print() const
{
    cout << "lenth of your farm is : " << length << endl;
    cout << "width of your fatm is : " << width << endl;
}


