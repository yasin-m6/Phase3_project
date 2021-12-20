#ifndef FUNCTIONS
#define FUNCTIONS

    #include<iostream>
    using namespace std;

    string get_name()
    {
        string name;

        cin >> name;

        return name;
    }

    int get_length()
    {
        int num;
        cout << "please Enter length of your farm -> ";
        cin >> num;

        return num;
    }

    int get_width()
    {
        int num;
        cout << "please Enter width of your farm -> ";
        cin >> num;

        return num;
    }

    int get_type()
    {
        int type;
        cout << "vegtebale you can plant is :\ntomato | cabbage = 1 | tcarrot = 2 | lettuce = 4" << endl;
        cout << "what vegtebale you wanna plant ? " ;
        cin >> type;

        return type;
    }

    int get_x_address()
    {
        int address;

        cout << "enter x address of plant : ";
        cin >> address;

        return address;
    }

    int get_y_address()
    {
        int address;

        cout << "enter y address of plant : ";
        cin >> address;

        return address;
    }

    



#endif