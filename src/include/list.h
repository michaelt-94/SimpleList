#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    // only the class can use
    protected:
    // Inherits or belongs to class
    public:
        // Constructor
        List() {}
        //Destructor
        ~List(){}
        
        // Properties
        vector<string> list;
        string name;

        // Prototype Declarations
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};