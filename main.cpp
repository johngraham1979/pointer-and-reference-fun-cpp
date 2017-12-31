#include <iostream>

using namespace std;

int main() {

    // delcare a variable for holding an adress,
    // which are of a standard length.
    // equalling nullptr is good practice.
    int* int_ptr = nullptr;

    //Setting the value of i to 39
    int i = 39;

    //setting up a 2nd reference to the integer  i;
    int& int_ref = i;

    // set the int_ptr to have the address of the variable i;
    int_ptr = &i;

    //printing to the console the de-referenced value at the address held by int_ptr;
    cout << *int_ptr << endl;

    //changing the value of int_ptr to now have the address of int_ref which happens to be the same
    //address as i;
    int_ptr = &int_ref;

    //consequently the value obtained by de-referencing the contents of that same address is the same value, 39.
    cout << *int_ptr << endl;
}