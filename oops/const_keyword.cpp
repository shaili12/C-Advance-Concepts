#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
#include<unistd.h>
#include<climits>
using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define endl '\n'
#define pb push_back
#define lbnd lower_bound
#define ubnd upper_bound
#define x first
#define y second
// numeric_limits<data_type>::max()
#define mod 1000000007
//_________________//;
#define MAX 100005
#define e 1000000000


int fun() {
	int a = 2;
	return a;
}



void solve() {

	// ------------1. const variable----------------------//

	const int x = 5;

	// x = 8; // can't reinitialized

	// const int t; // invalid...a const variable can't be left uninitialized

	int xx = 9;

	const int x_x = xx;

	const int _xx = fun();


	//------------- 2. const keyword with pointers---------------//

	//-----------------i) pointer to const value---------------//

	const int a = 7;

	const int * ptr = &a;

	cout << *ptr << " " << ptr << endl;

	ptr = &x ;// allowed

	cout << *ptr << " " << ptr << endl;

	// *ptr = x //not allowed . gives compilation error (read only memory)


	// -----------ii) const pointer variable to a value-------------//;
	int b = 8, c = 9;
	int* const ptr1 = &b;

	cout << *ptr1 << " " << ptr1 << endl;

	*ptr1 = c; //allowed

	cout << *ptr1 << " " << ptr1 << endl;

	// ptr1 = &c //not allowed , gives compilation error


	//------------ iii) const pointer  to a const value-------------//

	const int* const ptr2 = &x;
	cout << *ptr2 << " " << ptr2 << endl;

	// ptr2 = &a; //not allowed
	// *ptr2 = a; // not allowed



	// -------------reference variable----------------//

	int m = 90, l = 8;
	int &n = m;

	cout << m << " " << &m << endl;
	cout << n << " " << &m << endl;

	n = 78;  // valid

	cout << n << " " << m << endl;

	n = l ; //valid

	cout << n << " " << m << endl;

	// &n=&l //error--- can't reference any other object once it is bound to one variable


	//--------------reference to const variable----------------//
	const int q = 76;
	const int &p = q ;//equivalent to const int * const p=&q;

	// p = n; // invalid
	// &p = &n ;//invalid

	const int &pt = 80; // allowed.. internally it creates temporary object like this const int temp=80;

	//int &pt1 = 80; // not allowed ... a non-const reference can't be bound with a rvalue

	double d = 45.9;

	const int &pt2 = d; //valid.. internally creates temporary object of type (const int temp = 45)

	cout << pt2 << endl;

	// int &pt3 = d; //invalid .. non-const lvalue reference to type 'int' can not bind to a value of unrelated type 'double'







}


//main function
int main() {

	ios;
	clock_t begin = clock();
#ifndef ONLINE_JUDGE

	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output to output.txt
	freopen("output.txt", "w", stdout);

#endif

	//code here



	solve();


#ifndef ONLINE_JUDGE

	clock_t end = clock();
	cout << "\n\nExecuted In:  " << double(end - begin) / (CLOCKS_PER_SEC / 1000) << "ms" << endl;

#endif
	return 0;
}