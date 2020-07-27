
//the array should be passed to the function, which will sort the objects in ascending order of the age private variable

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class p3
{
private:
    string first_name;
    string last_name;
    int age;

public:
    //constructors
    p3() //default constructor
    {
        first_name = "Fname";
        last_name = "Lname";
        age = 21;
    }
    p3(int age_a) //constructor with age only
    {
        first_name = "Fname";
        last_name = "Lname";
        age = age_a;
    }

    p3(string Fname, string Lname) //constructor with first and last name only
    {
        first_name = Fname;
        last_name = Lname;
        age = 21;
    }

    p3(string Fname, int age_a) //constructor with one name only (chose first name)
    {
        first_name = Fname;
        last_name = "Lname";
        age = age_a;
    }

    p3(string Fname, string Lname, int age_a) // full constructor 
    {
        first_name = Fname;
        last_name = Lname;
        age = age_a;
    }

    // setters
    void set_firstName(string f_name)
    {
        first_name = f_name;
    }
    void set_lastName(string l_name)
    {
        last_name = l_name;
    }
    void set_Age(int a_age)
    {
        age = a_age;
    }
    void set_first_Last_names(string Fname, string Lname)
    {
        first_name = Fname;
        last_name = Lname;
    }
    void set_all(string Fname, string Lname, int age_a)
    {
        first_name = Fname;
        last_name = Lname;
        age = age_a;
    }
    //getters
    string get_firstName()
    {
        return first_name;
    }
    string get_lastName()
    {
        return last_name;
    }
    int get_Age()
    {
        return age;
    }

    //needed for sorting the aray by age in ascending order
    bool operator<(p3 C) {
        return (age < C.age);
    }

};

int main()
{
    p3 obj[10] = { {"Mary","Lucas",39},{"Joe","Frank",21} ,{"Luis","Clark",55} ,{"Jessie","Marcus",32} ,{"Bob","Micheal",34} };
    // Initialization of the objects, whos index is less or equal to 4 done using the constructor

    //the elements of an array whos index is greater than 4,initialized using the set() function.
    for (int i = 5; i < 9; i++) {
        obj[i].set_firstName("Jon");
        obj[i].set_lastName("Doe");
        obj[i].set_Age(25);
    }
    obj[9].set_all("Hal", "Mich", 55);//setting the class using a constructor

    sort(obj, obj + 10); // sorting the array
    // printing the sorted array
    for (auto o : obj) {
        cout << o.get_firstName() << "  " << o.get_lastName() << "  " << o.get_Age() << endl;
    }

    return 0;
}