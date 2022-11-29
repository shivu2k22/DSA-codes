#include <iostream>
#include <string>
using namespace std;
 
string toBinary(unsigned n)
{
    if (n == 0) {
        return "";
    }
 
    return toBinary(n / 2) + to_string(n % 2);
}
 
int main()
{
    int n ;
    cout<<"enter n";
    cin>>n;
 
    cout << "The binary representation of " << n << " is " << toBinary(n) << endl;
 
    return 0;
}
// given number is binary or not
#include<iostream>
using namespace std;
int main()
{
long int num;
cout<<"Enter the number to check: ";
cin>>num;
int count = 0;

while(num != 0)
{
int val = num % 10;
if((val != 1) && (val != 0))
{
count++;
break;
}

num = num / 10;
}

if(count > 0)

cout<<"Given number is not a binary\n";

else

cout<<"Given number is a binary\n";

return 0;

}