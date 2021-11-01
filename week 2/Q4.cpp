/*Write a C program to determine whether a given number is prime or not.
Test Data :
Input a number: 13
Expected Output :
13 is a prime number.
[ADDON] : Write a program in C to find the prime numbers within a range of numbers
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007
int check_prime(int no){
	if(no==2||no==3)return 1;
	if(no==0||no==1||!(no%2)||!(no%3))return 0;
	int sqrt_of_no=sqrt(no);
	for(int i=5;i<=sqrt_of_no;i+=4)if(!(no%i))return 0;
	for(int i=7;i<=sqrt_of_no;i+=4)if(!(no%i))return 0;
	return 1;
}
void solve(){
	int no;
	cin>>no;
    if(check_prime(no))
        cout<<no<<" is a prime number.";
    else
	    cout<<no<<" is not a prime number.";
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}