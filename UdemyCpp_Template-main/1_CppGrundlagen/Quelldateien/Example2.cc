#include <iostream>
#define PI 3.14159
using std::cout;
using std::cin;
using std::endl;
 int main()
 {
    float radius=0;


    int warte=0;
    cout << "gibt den radius des kreises ein" << endl;
    cin>>radius;
    cout << "umfang ="<<2*radius*PI<<endl;
    cout << "flaeche="<<radius*radius *PI<<endl;
    cin>>warte;
    return 0;
 }
