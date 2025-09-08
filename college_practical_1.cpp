#include <iostream>

using namespace std;

class rect
{
    int length;
    int breadth;

public:
    void get_data()
    {
        cout << "Enter the length > ";
        cin >> length;

        cout << "Enter the breadth > ";
        cin >> breadth;
    }

    void show_data()
    {
        cout << "length > " << length << endl;
        cout << "breadth > " << breadth << endl <endl;
    }
};

int main()
{
    rect obj1;

    obj1.get_data();
    obj1.show_data();

    rect obj2;

    obj2.get_data();
    obj2.show_data();
}