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

class student {

	string name;
	int roll_no ;

public:

	void set_name(string s) {
		this->name = s;
	}

	string get_name() {
		return name;
	}

	void set_roll_no(int r) {
		this->roll_no = r;
	}

	int get_roll_no() {
		return roll_no;
	}
};



void solve() {


	int n, k;
	cin >> n >> k;
	vector<int>a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 == 0) {
			a[i] -= 1;
		}
	}

	int i = 0, j = n;

	int sum = 0;
	int count = 0;
	int max_sum = 0;

	map<int, int>mp;

	while (j < n) {

		if (mp[a[j]] == 0) {
			sum += a[j];
			count++;

			mp[a[j]]++;


		}

		if (count == k) {
			max_sum = max(sum, max_sum);
		}
		if (mp[a[j]] != 0 || count > k) {

			while (mp[a[j]] != 0) {
				mp[a[i]]--;
				sum -= a[i];
				if (mp[a[i]] == 0) {
					mp.erase(a[i]);
				}
				sum += a[j];
				mp[a[j]]++;
				i++;
			}

		}

		j++;

	}

	cout << max_sum << endl;

	// return max_sum;

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