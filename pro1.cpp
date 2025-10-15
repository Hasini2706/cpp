//Create a class Employee to count how many objects are created using a static variable.
#include <iostream>
using namespace std;
class employee {
    static int count; // Static variable to count objects
public:
    employee() { // Constructor increments count
        count++;
        cout << "Employee object created. Total count: " << count << endl;
    }           
    static int getCount() { // Static method to get count
        return count;
    }
};