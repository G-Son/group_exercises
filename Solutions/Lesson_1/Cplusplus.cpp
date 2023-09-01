#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

void version(){
    cout<<"Version of c++ :"<< __cplusplus<<endl;

}
void timeANDdate(){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << " Current date : " << dt << endl;
}
void helloworld(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    string text = "Hello World";
    cout << "Rainbow: ";
    int colors[] = {4,12,14,10,2,6,5}; 
    for (size_t i=0l; i<text.size(); i++) {
        SetConsoleTextAttribute(hConsole, colors[i % 7]);
        cout <<text[i];
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout <<endl;

}
void circle(){
    double radius;
    cout << "Enter radius of circle";
    cin >> radius;
    double area = 3.14 * pow(radius, 2);
    cout << "Area : "<< area <<endl;
}

void names(){
    string name, lastname;
    cout << "First name: ";
    cin >> name;
    cout << "Last name: ";
    cin >> lastname;
    cout << "Reverse: "<< lastname << " " << name << endl;
}

int main()
{
    version();
    timeANDdate();
    helloworld();
    circle();
    names();    
    return 0;
}