#include <iostream>

using namespace std;

int main()
{
    int num;
    int arr [num];
    cout<<"Type number: ";
    cin>>num;
    int b[10] = { 5, 6, 9, -8, 3, 2, 4, -90, -103, 0 };
    float C[] = { -3.9, 2.8, -1.6, 2.2 };
    char str2[] = { 'H', 'e', 'l', 'l', 'o', '!'};
    for (int i = 0; i <= num; i++) {
        cout << "Type number: ";
        cin >>i;
        
    }
    for(int i = 0; i <= num; i++){
        if (arr[i]%2 == 0) {
            cout << "First numbers: " << arr[i]<<endl;
        } else {
            cout << "Second numbers: " << arr [i]<<endl;
        }
    }

    return 0;
}
