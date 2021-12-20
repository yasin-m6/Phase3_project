#include"farmer.hpp"
#include <exception>
#include <algorithm>

using namespace std;


farmer::farmer(string name , int coin )
{
    while (1)
    {
        try
        {
            set_name(name);
            break;
        }
        catch(invalid_argument & e)
        {
            cerr << e.what() << endl;
            name = get_name();
        }
        
    }


    this->coin = coin;
}

farmer::~farmer()
{

}

string farmer::get_name()
{
    string name;

    cout << "please enter your name : " ;
    cin >> name;

    return name;
}

void farmer::set_name(string name)
{
    for (size_t i = 0; i < name.length(); i++)
    {
        if ( ( isalpha(name[i]) != isalpha('a') ) && ( isalpha(name[i]) != isalpha('A') ) )
        {
            throw(invalid_argument("name has to be just contain by alphabets!!!"));
        }
        
    }
    farmer_name = name;  
}

void farmer::change_coin(int number)
{
    coin += number;
}

void farmer::add_new_tools(string tools_name , int type)
{
    int address = -1;

    vector<string>::iterator item;
    item = find(tools.begin() , tools.end() , tools_name);
    address = &(*item) - &(*tools.begin());

    /*for (size_t i = 0; i < tools.size() ; i++)
    {
        if(tools_name == tools[i])
        {
            address = i;
            break;
        }
    }*/

    if (address != -1)
    {
        tools.erase(tools.begin() + address);
        tools_type.erase(tools_type.begin() + address);
    }
    tools.push_back(tools_name);
    tools_type.push_back(type); 
}

void farmer::add_new_vegtables(string veg_name , int number)
{
    int address = -1;
    
    vector<string>::iterator item;
    item = find(veg_type.begin() , veg_type.end() , veg_name);
    address = &(*item) - &(*veg_type.begin());

    if (address >= 0 && address <= veg_type.size())
    {
        vegs_number[address] += number;
    }
    else
    {
        veg_type.push_back(veg_name);
        vegs_number.push_back(number);
    }
    
    
}

void farmer::remove_product(string veg_name)
{
    int address = -1;
    
    vector<string>::iterator item;
    item = find(veg_type.begin() , veg_type.end() , veg_name);
    address = &(*item) - &(*veg_type.begin());

    if (address >= 0 && address <= vegs_number.size())
    {
        if(vegs_number[address] > 0)
        {
            vegs_number[address]--;
            if (vegs_number[address] == 0)
            {
                veg_type.erase(veg_type.begin() + address);
            }

        }
    }
    else
    {
        throw invalid_argument("you have to buy this vegetable!!!");
    }
    

}