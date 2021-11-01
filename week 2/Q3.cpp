/*Write a C program to check whether a given number is an armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007		
void solve(){
	int no,digits_count=0,arm_no=0,temp;
	cin>>no;
	temp=no;
	while(temp){
		digits_count++;
		temp/=10;
	}
	temp=no;
	while(temp){
		arm_no=arm_no+pow(temp%10,digits_count);
		temp/=10;
	}
	if(no==arm_no)
		cout<<no<<" is an Armstrong number.";
	else 
		cout<<no<<" is not an Armstrong number.";
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}