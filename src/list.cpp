#include "include/list.h"



/* FUNCTIONS*/
void List::print_menu(){
    int choice;

    cout << "*************************\n";
    cout << " 1 - Print List\n";
    cout << " 2 - Add to List\n";
    cout << " 3 - Delete from List\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press return/enter: ";
    cin >> choice;

    if(choice == 4){
        exit(0);
    } else if(choice == 3){
        delete_item();
    } else if(choice == 2){
        add_item();
    } else if(choice == 1){
        print_list();
    } else {
        cout << " Sorry choice has not been iomplemented\n.";
    }
    cin.clear();

}

void List::add_item(){
    cout << "\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an Item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added item to the list.\n";
    cin.clear();
    print_menu();
}

void List::delete_item(){
    cout << "\n\n\n";
    cout << "*** Delete Item ***\n";
    cout << "Select index number for item\n";

    if(list.size()){
        for(unsigned int i=0; i<list.size(); i++){
            cout << i << ": " << list[i] << endl;
        }
        int choiceNum;
        cin >> choiceNum;

        list.erase(list.begin() + choiceNum);
    } else {
        cout << "There are no  items in the list to delete: ";
    }
    print_menu();
}

void List::print_list(){
    cout << "\n\n\n";
    cout << "*** Print List ***\n";
    
    for (unsigned int list_index=0; list_index < list.size(); list_index++){
        cout << " * " << list[list_index] << endl;
    }

    cout << "M - Menu" << endl;
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm'){
        print_menu();
    } else {
        cout << "Invalid choice ... exting program.";
    }
}