#include "include/list.h"
/*
**************** MAIN FUNCTION ********************
* int arg_count - number of string arguments passed in
* char *args[]  - character pointer array of strings
*/
int main(int arg_count, char *args[]) {
    if (arg_count > 1){

        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    } else {
        cout << "Username not supplied ... exiting the program." << endl;
    }

    return 0;
}