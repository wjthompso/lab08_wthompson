#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	int length = s1.length();
	string newstring = "";
	for (int i = 0; i < length; i++) {
		if ((tolower( s1[i]) - 'a' )<= 26 && (tolower(s1[i]) - 'a') >= 0) {
			newstring += tolower(s1[i]);
		}
	}

	int word1[26] = {0};

	for (int i = 0; i < newstring.length(); i++) {
		word1[tolower(newstring[i]) - 'a']++;
	}

	string newstring1 = "";
	for (int i = 0; i < s2.length(); i++) {
		if ((tolower(s2[i]) - 'a' )<= 26 && (tolower(s2[i]) - 'a') >= 0) {
			newstring1 += tolower(s2[i]);
		}
	}

	for (int i = 0; i < newstring1.length(); i++) {
		word1[tolower(newstring1[i]) - 'a']--;
	}

	for (int i = 0; i < 26; i++) {
		if (word1[i] != 0) 
		return false;
	}

	return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
	// 1) Have the program lowercase each string
	// 2) Have the program disregard all punctuation
	// 3) Build a new string by starting at the last character of one string 
	// and iterating to the first character
	int length = s1.length();
	string newstring = "";
	for (int i = 0; i < length; i++) {
		if ((tolower( s1[i]) - 'a' )<= 26 && (tolower(s1[i]) - 'a') >= 0) {
			newstring += tolower(s1[i]);
		}
	}

	string backwards = "";

	for (int i = newstring.length() - 1; i >= 0; i--) {
		backwards += newstring[i];
	}

	return backwards == newstring;
}


