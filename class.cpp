#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age;
    int standard;
    string s1;
    string s2;

public:
    void set_age(int x)
    {
        age = x;
    }
    void set_standard(int y)
    {
        standard = y;
    }
    void set_first_name(string z1)
    {
        s1 = z1;
    }
    void set_last_name(string z2)
    {
        s2 = z2;
    }
    void get_age()
    {
        cout << age;
    }
    void get_standard()
    {
        cout << standard;
    }
    void get_first_name()
    {
        cout << s1;
    }
    void get_last_name()
    {
        cout << s2 << ",";
    }
    void to_string()
    {
        cout << age << "," << s1 << "," << s2 << "," << standard;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    st.get_age();
    cout << endl;
    st.get_last_name();
    st.get_first_name();
    cout << endl;
    st.get_standard();
    cout << endl;
    cout << endl;
    st.to_string();
    cout << endl;

    return 0;
}