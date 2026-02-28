#include<iostream>
using namespace std;
int main(){
	int sizeOfArr = 8;
	int evenNumber = 0;
	int oddNumber = 0;
	int arr[sizeOfArr] = {22,35,66,77,99,12,38,28};
	for ( int i = 0; i < sizeOfArr; i++ ){
		if ( arr[i] % 2 == 0 ){
			evenNumber++;
		}else{
			oddNumber++;
		}
	}
	cout<<"Even Number : "<<evenNumber<<endl;
	cout<<"Odd Number : "<<oddNumber<<endl;
}
