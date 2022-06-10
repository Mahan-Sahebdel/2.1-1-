#include<iostream>
#include<conio.h>
#define N 6
using namespace std;
bool ispeack(int i, int arr[]) {
	if (i != 0 && i != N - 1)

		if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
			return true;
		else if (i == 0)
			if (arr[i + 1] < arr[i])
				return true;

			else if (i == N - 1)
				if (arr[i - 1] < arr[i])
					return true;

	return false;

}
int solve(int arr[]) {
	for (int i = 0; i < N; i++) {
		if (ispeack(i, arr)) {
			return i;
			cout << i;
		}

	}
	return N;
}
main() {

	int arr[] = { 1,3,20,4,1,0 };
	if (N == solve(arr))
		cout << "no such i";
	else
		cout << solve(arr);

}