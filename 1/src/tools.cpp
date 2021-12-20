#include<iostream>
#include<stdexcept>
#include"tools.hpp"

TOOLS::TOOLS(string name , unsigned int price , unsigned int w_time)
{//constructor of tools
    tools_name = name;
    this->price = price;
    work_time = w_time;
}

TOOLS::~TOOLS()
{

}


DAS::DAS(string name):TOOLS(name , price , work_time)
{
    int price;
    int work_time;
    int type = get_type();
    set_type(type);
    if ( this->type == SICKLE)
    {
        name = "Das_1";
        price = 5;
        work_time = 10;
    }
    else
    {
        name = "Das_2";
        price = 10;
        work_time = 15;
    }

}

DAS::~DAS()
{

}

int DAS::get_type()
{
    int type;
    cout << "SICKLE = 0 | SCYTHE = 1" << endl;
    cin >> type;


    return type;
}

void DAS::set_type(int type)
{
    if (type == 0)
    {
        this->type = SICKLE;
    }
    else if (type == 1)
    {
        this->type = SCYTHE;
    }
    else
    {
        throw invalid_argument("we have just 2 type of DAS");
    }
}

SHOVEL::SHOVEL(string name):TOOLS(name , price , work_time)
{
    int price;
    int work_time;
    int type = get_type();
    set_type(type);
    if (this->type == SMALL_SHOVEL)
    {
        name = "Shovel_1";
        price = 7;
        work_time = 15;
    }
    else
    {
        name = "Shovel_2";
        price = 13;
        work_time = 20;
    }

}

SHOVEL::~SHOVEL()
{

}

int SHOVEL::get_type()
{
    int type;
    cout << "Small shovel = 0 | Big shovel = 1" << endl;
    cin >> type;

    return type;
}

void SHOVEL::set_type(int type)
{
    if (type == 0)
    {
        this->type = SMALL_SHOVEL;
    }
    else if (type == 1)
    {
        this->type = BIG_SHOVEL;
    }
    else
    {
        throw invalid_argument("we have just 2 type of shovel");
    }
}

SPRAYER::SPRAYER(string name):TOOLS(name , price , work_time)
{
    
    int price;
    int work_time;
    int type = get_type();
    set_type(type);
    if (this->type == SMALL_SPRAYER)
    {
        name = "Sprayer_1";
        price = 3;
        work_time = 15;
        hajm = 2;
    }
    else
    {
        name = "Shovel_2";
        price = 7;
        work_time = 20;
        hajm = 4;
    }

}

SPRAYER::~SPRAYER()
{

}

int SPRAYER::get_type()
{
    int type;
    cout << "Small sprayer = 0 | Big sprayer = 1" << endl;
    cin >> type;

    return type;
}

void SPRAYER::set_type(int type)
{
    if (type == 0)
    {
        this->type = SMALL_SPRAYER;
    }
    else if (type == 1)
    {
        this->type = BIG_SPRAYER;
    }
    else
    {
        throw invalid_argument("we have just 2 type of sprayer");
    }
}

WATER_PIPE::WATER_PIPE(string name):TOOLS(name , price , work_time)
{
    int price;
    int work_time;
    int type = get_type();
    set_type(type);
    if (this->type == PE)
    {
        name = "water pipe 1";
        price = 7;
        work_time = 20;
        diameter_pipe = 10;
    }
    else
    {
        name = "water pipe 2";
        price = 10;
        work_time = 25;
        diameter_pipe = 16;//millimetre
    }
}
WATER_PIPE::~WATER_PIPE()
{

}

int WATER_PIPE::get_type()
{
    int type;
    cout << "PE water pipe = 0 | PVC water pipe = 1" << endl;
    cin >> type;

    return type;
}
void WATER_PIPE::set_type(int)
{
    if (type == 0)
    {
        this->type = PE;
    }
    else if (type == 1)
    {
        this->type = PVC;
    }
    else
    {
        throw invalid_argument("we have just 2 type of water pipe");
    }
}