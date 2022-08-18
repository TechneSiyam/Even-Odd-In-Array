#include <iostream>
using namespace std;

int main(){

int num[10] = {};
cout << "Enter 10 Elements" << endl;

for(int i = 0; i < 10; i++){

    cin >> num[i];

}

for(int i = 0; i < 10; i++){

    int num2 = num[i];
    if(num2%2 == 0){

        cout << num2 << " is even" << endl;
    }
    else{
        cout << num2 << " is odd" << endl;
    }
}
return 0;
}
