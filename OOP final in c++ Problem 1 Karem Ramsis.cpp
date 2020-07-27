#include <iostream>
using namespace std;

void print_smallest_and_largest(int a[10]) // function to get cmallest and largest
{
    int smallest, smallest_index, largest, largest_index; // creating local function variables for all 4 wanted values

    int i = 0; // initialising i 
    smallest_index = i; // using i for the index
    largest_index = i; // using i for the index
    smallest = a[i];// using a[i] for the value of the index
    largest = a[i];// using a[i] for the value of the index

    for (i; i < 10; i++) {
        // for loop to cycle through the array to get the larges and smalles and their index in the array

        if (a[i] < smallest) {
            smallest = a[i];
            smallest_index = i;
        }
        if (a[i] > largest) {
            largest = a[i];
            largest_index = i;
        }
    }
    // outputing the results of the function
    cout << "largest int is " << largest << " at index " << largest_index << endl;
    cout << "smallest int is " << smallest << " at index " << smallest_index << endl;

}

void sort_desc(int a[10])  //sort in descending
{
    int temp; // creating a temp variable

   // creeating a for loop that uses three integers: i,j and temp.
    for (int i = 0; i < 10; i++) // this for loop will increment the internal for loop and execute it 10 times
    {
        // a for loop is nested that will use a temporary variable to hold a value while it checks the value and sorts them
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[10]; // creating a 10 element array of integers

    cout << "Enter 10 Element into the array" << endl; // requesting the user to enter the 10 elements

    for (int i = 0; i < 10; i++) // for loop to add the 10 elements using cin
        cin >> a[i];

    int* p; //pointer used to pass the array to the function
    p = a;

    print_smallest_and_largest(p); // executing the fuction that gets the largest and smallest

    cout << "Here are the sorted array elements in descending order" << endl;
    sort_desc(p); // execute the functions that sorts in descending order
    for (auto x : a) // output the descending order function
        cout << x << endl;

    return 0;
}