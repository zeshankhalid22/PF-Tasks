// Largest palindrome from the product of tow N digit numbers
// e.g two-digit numbers. 91 * 93 = 9009 has largest product
#include "iostream"
#include "cmath"
using namespace std;
int palindrome(int n){
    int backup=n;
    int x;
    int rev=0;
    while (n!=0){
        x = n % 10;
        rev = (rev * 10) + x;
        n/=10;
    }
    if(rev==backup)
        return true;
    else
        return false;

}
void largest_palindrome(int n){
    int upper_limit= pow(10,n)-1;
    int lower_limit=(10,n-1);
    int largest=0;
    int firstDigit=0,secondDigit=0;
    for(int i=upper_limit;i>=lower_limit;i--){
        for(int j=i;j>=lower_limit;j--){
            int n=i*j;
            if(palindrome(n) && n>largest) {
                largest = n;
                firstDigit = i;
                secondDigit = j;
            }
        }
    }
    cout<<"largest palindrome from the product of 2 digits"
        <<firstDigit<<" ,"<<secondDigit<<" is "<<largest<<endl;
}

int main(){
    int n;
    cout<<"Enter how many digit numbers you want"
        <<" to find for largest palindrome";
    cin>>n;
    largest_palindrome(n);
}