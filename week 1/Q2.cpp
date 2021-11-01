/*Write a C program to calculate the factorial of a given number. 
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007
#define pb push_back
ull small_fact(int n){
	return n==1||n==0?1:n*small_fact(n-1);
}
int large_fact(int n,int *arr){
	ull temp=small_fact(20);//better way use 2432902008176640000 ie fact(20)
	int c,digits_count=0,j;
	while(temp){
		arr[digits_count++]=temp%10;
		temp/=10;
	}
	for(int i=21;i<=n;i++){
		for(j=0,c=0;j<digits_count;j++){
			c+=arr[j]*i;
			arr[j]=c%10;
			c/=10;
		}
		while(c){
			arr[digits_count++]=(c%10);
			c/=10;
		}
	}
	return digits_count;
}
void solve(){
	int no;
	cin>>no;
	if(no<=20){
		cout<<"The Factorial of "<<no<<" is: "<<small_fact(no);
	}
	else {
		int factorial[1000];
		int digits_count=large_fact(no,factorial);
		cout<<digits_count<<endl;
		cout<<"The Factorial of "<<no<<" is: ";
		while(--digits_count)cout<<factorial[digits_count];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}