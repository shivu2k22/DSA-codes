// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
/* Function checks if passed strings (str1
   and str2) are rotations of each other */
bool areRotations(string str1, string str2)
{
    /* Check if sizes of two strings are same */
    if (str1.length() != str2.length())
        return false;
 
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}
 
/* Driver code */
int main()
{
    string str1 = "AACD", str2 = "ACDA";
 
    // Function call
    if (areRotations(str1, str2))
        printf(" TRUE ");
    else
        printf(" FALSE ");
    return 0;
}