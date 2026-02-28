#include<iostream>
#include<climits>
using namespace std;
int main(){
	int sizeOfArr = 7;
	int largestNumber = INT_MIN;
	int arr[sizeOfArr] = {49,66,22,55,-99,88,44};
	for ( int i = 0; i < sizeOfArr; i++ ){
		if ( arr[i] > largestNumber ){
			largestNumber = arr[i];
		}
	}
	cout<<"The Largest Value in the list is : "<<largestNumber;
}
