#include <iostream>
#include "doublyLinkedList.h"

using namespace std;

const int SENTINEL = -999;

int main() {
    // std::cout << "Enter a list of positive integers ending with -999:" << std::endl;
    doublyLinkedList<int> intList;

    int input;
    do{
        cin >> input;
        if (input == SENTINEL){
            break;
        }else{
            intList.insert(input);
        }
    } while (true);

    // std::cout << "List in ascending order:" << std::endl;
    intList.print();
    cout << std::endl;
    // std::cout << "List in descending order:";
    intList.reversePrint();
    cout << std::endl;

    // cout << "Enter item to be deleted: ";
    cin >> input;
    // cout << "List after deleting " << input << " : ";
    intList.deleteNode(input);
    intList.print();
    cout << std::endl;

   //  cout << "Enter item to be searched: ";
    cin >> input;
    cout << input << " " << ( intList.search(input) ? "found" : "is not" )
    << " in the list." << std::endl;

//    cout << "********Testing copy constructor***********" << std::endl;
//    cout << "intList: ";
    intList.print();
    cout << std::endl;
    doublyLinkedList<int> temp(intList);
//    cout << "********Testing assignment operator***********" << std::endl;
//    cout << "temp: ";
    temp.print();
    cout << std::endl;

    return 0;
}

/*
Instructions
Write a program to test various operations of the class doublyLinkedList.
Your program should accept a list of integers from a user and use the doubleLinkedList class to output the following:

1. The list in ascending order.
2. The list in descending order.
3. The list after deleting a number.
4. A message indicating if a number is contained in the list.
5. Output of the list after using the copy constructor.
6. Output of the list after using the assignment operator.
*/

/*
Enter a list of positive integers ending with -999:
83
121
98
23
57
33
-999

List in ascending order: 23  33  57  83  98  121
List in descending order: 121  98  83  57  33  23
Enter item to be deleted: 57

List after deleting 57 : 23  33  83  98  121
Enter item to be searched: 23

23 found in the list.
********Testing copy constructor***********
intList: 23  33  83  98  121
********Testing assignment operator***********
temp: 23  33  83  98  121
 */

// Your program should use the value -999 to denote the end of the input list.