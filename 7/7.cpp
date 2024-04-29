// 7
#include <iostream>
using namespace std;
int main()
{
    int feet;
    int inche;
    int converttheinche;
    float cm;
    cout << "enter the length by feet:\n";
    cin >> feet;
    converttheinche= feet * 12;
    cout << "the lenght of inche=\n"<<converttheinche<<endl;
    cout << "enter the length by inche:\n";
    cin >> inche;
    cm = inche * 2.54;
    cout << "the lenght of centimeters=" << cm;
    return 0;
}
