#include<iostream>
using namespace std;
int main(){
	int SizeOfArr = 6;
	int arrA[SizeOfArr] = {1,3,5,7,8,9};
	int arrB[SizeOfArr];
	//copying arrA into arrB
	for ( int i = 0; i < SizeOfArr; i++ ){
		arrB[i] = arrA[i];
	}
	//printing arrA first
	cout<<"Arr A : ";
	for (int i = 0; i < SizeOfArr; i++){
		cout<<arrA[i]<<" ";
	}
	cout<<endl;
	//printing arrB 
	cout<<"Arr B : ";
	for (int i = 0; i < SizeOfArr; i++){
		cout<<arrB[i]<<" ";
	}
	return 0;
	} 
