#include <iostream>

using namespace std;

int main() {

    // Declare a variable for holding an address,
    // which are of a standard length.
    // Sometimes initializing a pointer to 'nullptr' is good to do.
    int* int_ptr = nullptr;

    //Setting the value of i to 39.
    int i = 39;

    //Setting up a 2nd reference to the integer  i.
    int &int_ref = i;

    // [*] Set the int_ptr to have the address of the variable i.
    int_ptr = &i;

    //Pinting to the console the de-referenced value at the address held by int_ptr.
    cout << *int_ptr << endl;

    //[**]  Changing the value of int_ptr to now have the address of int_ref which happens to be the same
    // Address as i.
    // Compare [*] and [**].
    int_ptr = &int_ref;

    // Consequently the value obtained by de-referencing the contents of that same address is the same value, 39.
    cout << *int_ptr << endl;
}