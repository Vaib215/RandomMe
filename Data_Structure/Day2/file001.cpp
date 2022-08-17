//  Write a ,menu driven program that inserts a new element at the end or at a given position.
// Delete an element from given position.
// Display the list.

#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {0}, endPos = 0;
    while (true)
    {
        cout << "What do you want to do?\n1. Add Element at the end\n2. Add Element at a specific position\n3. Delete Element from the end\n4. Delete Element from a specific position\n5. Exit\n";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the number you want to add: ";
            cin >> arr[endPos++];
        }
        else if (choice == 2)
        {
            cout << "Enter the position where you want to insert new element: ";
            int position;
            cin >> position;
            cout << "Enter the number you want to add: ";
            cin >> arr[position];
        }
        else if (choice == 3)
        {
            int pos; cin>>pos;
            cout << "Deleted element successfully.\n ";
            arr[pos] = 0;
        }
        else if (choice == 4)
        {
            cout << "Deleted last element.\n ";
            arr[endPos--] = 0;
        }
        else if (choice == 3)
        {
            cout << "The elements are: ";
            for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
            {
                cout << arr[i] << "\t";
            }
            break;
        }

        else
        {
            cout << "Wrong Choice\n";
            continue;
        }
    }
}