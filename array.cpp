#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int phoneNumber;
    int phoneNumberCalled;
    float distance;
    float duration;

    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter phone number" << endl;
    cin >> phoneNumber;
    cout << "Enter number called" << endl;
    cin >> phoneNumberCalled;
    cout << "Enter distnace from shah alam (km)" << endl;
    cin >> distance;
    cout << "Enter duration" << endl;
    cin >> duration;

    float costPrice;

    if(distance < 25){
        costPrice = 0.35 * duration;
        cout << "RM" << costPrice << endl;
    }else if (distance >= 25 and distance < 75){
        costPrice = 0.65 * duration;
        cout << "RM" << costPrice << endl;
    }else if (distance >= 75 and distance < 300){
        costPrice = 1 * duration;
        cout << "RM" << costPrice << endl;
    }else if (distance >= 300 and distance < 1000){
        costPrice = 2 * duration;
        cout << "RM" << costPrice << endl;
    }else{
        costPrice = 3 * duration;
        cout << "RM" << costPrice << endl;
    }

    int arr[6] = {name, phoneNumber, phoneNumberCalled, distance, duration, costPrice};
    for(int i = 0; i <= sizeof(arr)/sizeof(arr[i]); ++i){
        cout << i[arr] << endl;
    }
    return 0;
}