#include <iostream>
using namespace std;
//Pass  by value
/*void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap (pass by value): x = " << a << ", y = " << b << endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);  // Pass by value
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}*/

//Pass by Reference
/*void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap (pass by reference): x = " << a << ", y = " << b << endl;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);  // Pass by refernce
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}*/

//Call/Pass by Address - only using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<< "Inside swap(call by address): x = "<< *a << ", y = " << *b << endl;
}

int main(){
    int x = 5, y = 10;
    cout << "Before swap: x = "<< x << ", y = " << y << endl;
    swap(&x, &y); // Call by address
    cout << "After swap: x = "<< x << ", y = " << y << endl;
    return 0;
}