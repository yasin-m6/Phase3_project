#ifndef FARMER
#define FARMER

    #include <iostream>
    #include <vector>
    #include"vegtebale.hpp"
    #include"farm.hpp"
    

    class farmer
    {
        public:
            farmer(std::string , int );
            ~farmer();
            std::string get_name();
            void set_name(std::string);
            void change_coin(int);
            void add_new_tools(std::string , int);
            void add_new_vegtables(std::string , int number);
            void remove_product(std::string);
            void remove_old_tools();
        private:
            std::string farmer_name;
            unsigned int coin;
            std::vector<std::string>tools;
            std::vector<int>tools_type;

            std::vector<int>  vegs_number;
            std::vector<std::string>veg_type;

    };

#endif