#ifndef ABZAR
#define ABZAR

    using namespace std;

    enum SPRAYER_TYPE {SMALL_SPRAYER , BIG_SPRAYER};
    enum SHOVEL_TYPE {SMALL_SHOVEL , BIG_SHOVEL};
    enum DAS_TYPE {SICKLE , SCYTHE};
    enum WATER_PIPE_TYPE{PE , PVC};


    class TOOLS
    {
        public:
            TOOLS(string , unsigned int , unsigned int);
            ~TOOLS();


        protected:
            string tools_name;
            unsigned int price;
            unsigned int work_time;//tedad dafaat ghabel estefade
            unsigned int use_time;//baraye fahmidan tedad dafaat estefade shode

    };

    class SHOVEL: public TOOLS
    {
        public:
            SHOVEL(string name);
            ~SHOVEL();
            int get_type();
            void set_type(int);
        private:
            SHOVEL_TYPE type;

    };

    class DAS : public TOOLS
    {
        public:
            DAS(string name);
            ~DAS();
            int get_type();
            void set_type(int);
        private:
            DAS_TYPE type;
    };

    class SPRAYER : public TOOLS
    {
        public:
            SPRAYER(string name);
            ~SPRAYER();
            int get_type();
            void set_type(int);
            
        private:
            unsigned int hajm; 
            SPRAYER_TYPE type;

    };

    class WATER_PIPE : public TOOLS
    {
        public:
            WATER_PIPE(string name);
            ~WATER_PIPE();
            int get_type();
            void set_type(int);

        private:
            int diameter_pipe;
            WATER_PIPE_TYPE type;
    };

#endif