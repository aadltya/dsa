#include<iostream>
#include<array>
using namespace std;

int transform(int arr[][3]) {
	for(int i=0; i<3; i++) {
		for(int j=i; j<3; j++) {
			//swapping elements to make transpose
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}b 
}

void print(int arr[][3]) {
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<arr[i][j];
		}
	}
}

int main() {
	
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cin>>arr[i][j];
		}
	}

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<arr[i][j];
		}
	}

	cout<<transform(arr);
	cout<<print(arr);

	return 0;
}


