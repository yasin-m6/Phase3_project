#ifndef VEGTEBALES
#define VEGTEBALES

    #include<vector>
    using namespace std;

    enum VEG{TOMATO = 1 , CABBAGE , CARROT , LETTUCE};

    class vegtebale
    {
        public:
            vegtebale(int , int , int);
            ~vegtebale();
            int get_type();
            void set_type(int);
            void set_address(int , int);
            int return_type();
            void print();

        private:
            void veg_info();
            VEG type;
            unsigned int x_address;
            unsigned int y_address;
            unsigned int price;
            unsigned int growing_date;
            unsigned int water_day; //to now how often do you irrigate your plant
            
    };

    

#endif
