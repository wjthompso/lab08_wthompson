#include "linkedList.h"
#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main() {
	//Testing palindrome
	cout << "TESTING PALINDROME" << endl;
	cout << "Testing: Eva, Can I Stab Bats In A Cave?" << endl;
	string b = "Eva, Can I Stab Bats In A Cave?";
	assertTrue(isPalindrome(b));

	//Testing Anagram
	cout << "TESTING ANAGRAM" << endl;
	cout << "Testing: 'Dormitory' and 'Dirty room'" << endl;
	string c = "Dormitory";
	string d = "Dirty room";
	assertTrue(isAnagram(c, d));

	//Testing recursiveSum
	cout << "TESTING RECURSIVE_SUM" << endl;
    int arr1[5] = {1,2,3,4,5};
    LinkedList* LinkySlinky1 = arrayToLinkedList(arr1, 5);
    assertEquals(15, recursiveSum(LinkySlinky1->head));

    int arr2[3] = {10,20,30};
    LinkedList* LinkySlinky2 = arrayToLinkedList(arr2, 3);
    assertEquals(60, recursiveSum(LinkySlinky2->head));

    //Testing recursiveLargestValue
    cout << "TESTING RECURSIVELARGESTVALUE" << endl;
    int arr3[4] = {10,20,30, 40};
    LinkedList* LinkySlinky3 = arrayToLinkedList(arr3, 4);
    assertEquals(40, recursiveLargestValue(LinkySlinky3->head));
}