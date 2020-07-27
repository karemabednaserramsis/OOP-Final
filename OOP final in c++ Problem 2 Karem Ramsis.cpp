#include <iostream>
#include <string>
using namespace std;
struct professor
	// creating the structure,following attributes: First Name, Last Name, Height and age.
{
	string first_name;
	string last_name;
	float height;
	int age;
};
void print(professor a[10])
//function, which prints out the first name and last name of the professor, whos sum of age and height is the biggest.
{
	int i = 0, biggest_index = i;// initializing i and assigning it to biggest index
	float biggest = a[i].height + a[i].age; // defining bigggest as the sum of age and height

	for (i = 1; i < 10; i++) { // for loop to get the biggest
		if ((a[i].height + a[i].age) > biggest) {
			biggest = a[i].height + a[i].age;
			biggest_index = i;
		}
	}
	cout << a[biggest_index].first_name << " " << a[biggest_index].last_name << endl; // printing the biggest index
}

int main()
{
	// the 10 element array
	professor a[10];

	string fname[10] = { "Kevin","Mark","Mary","Katy","Ayla", "Charles","Toby","Lucy", "Shane", "Tom" };
	string lname[10] = { "Duncan","Hart","Smith","Moore","Larson", "Cooper","Simpson","Holt", "White", "Thomas" };
	int age[10] = { 37,45,64,45,34,46,35,75,44,56 };
	float height[10] = { 1.55,1.75,1.45,1.67,1.53,1.78,1.99,1.84,1.76,1.44 };// height in meters.centemeters
	//filling the array with random data using a for loop to test
	for (int i = 0; i < 10; i++) {
		a[i].first_name = fname[i];
		a[i].last_name = lname[i];
		a[i].age = age[i];
		a[i].height = height[i];
	}

	print(a); // calling the function

	return 0;
}

