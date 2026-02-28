#include<iostream>
#include<climits>
using namespace std;
int main(){
	int smallest = INT_MAX;
	int sizeOfArr = 8;
	int arr[sizeOfArr] = {12,88,-56,78,22,45,-87,11};
	for ( int i = 0; i < sizeOfArr; i++ ){
		if ( arr[i] < smallest ){
			smallest = arr[i];
		}
	}
	cout<<"The Smallest Number in the list is : "<<smallest;
}
