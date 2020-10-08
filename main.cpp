#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int arrSize = 0;

    cout << "Enter the size of an array: ";
    cin >> arrSize;
    cin.ignore();

    string *arr = new string[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "\n Enter word: ";
        getline(cin, arr[i]);
    }

    cout << endl;

    int k = 0;
    bool swapStrings = true;
    string temp;
    while (swapStrings)
    {
        swapStrings = false;
        k++;
        for (int i = 0; i < arrSize - k; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapStrings = true;
            }
        }
    }
    
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl << endl;

    delete [] arr;
    return 0;
}
