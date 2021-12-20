#ifndef MAZRAE
#define MAZRAE

    #include<vector>
    using namespace std;

    class farm
    {

        public:
            farm(int ,int);
            int get_length();
            int get_width();
            int set_length(int length);
            int set_width(int width);
            bool check_address(int , int);
            void plant(int type , int x , int y);
            void print() const;
        
        private:
            unsigned int length;
            unsigned int width;
            vector< vector<int> > yourfarm;
    };






#endif