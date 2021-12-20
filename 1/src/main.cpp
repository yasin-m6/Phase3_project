#include<iostream>
#include<iomanip>
#include<new>
#include<stdexcept>
#include"farmer.hpp"
#include"farm.hpp"
#include"tools.hpp"
#include"vegtebale.hpp"
#include"func.hpp"

using namespace std;



int main()
{
   string name;
   int length;
   int width;
   int veg_type;
   int x;
   int y;
   bool confirmation = false;

   name = get_name();
   farmer the_farmer(name , 100);

    length = get_length();
    width = get_width();
    farm my_farm(length , width);

    vector<vegtebale> vegtebales;    //baraye zakhire giah haeai ke kashtim
    veg_type = get_type();

    while (confirmation == false)
    {
        x = get_x_address();
        y = get_y_address();

        confirmation = my_farm.check_address(x , y);
    }
    vegtebales.push_back( vegtebale(veg_type , x , y) );

    veg_type = vegtebales[vegtebales.size() - 1].return_type();
    my_farm.plant(veg_type , x , y);

}
