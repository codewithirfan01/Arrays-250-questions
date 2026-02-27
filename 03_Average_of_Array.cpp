#include <iostream>
using namespace std;
int main(){
    int sizeOfArr = 5.0;
    int sumOfArr = 0;
    int arr[sizeOfArr] = {4,77,39,22,55};
    //loop for sum of all element in array
    for ( int i = 0; i < sizeOfArr; i++ ){
    	sumOfArr += arr[i];
	}
	float average = (float)sumOfArr / sizeOfArr;
	cout<<"The Average is : "<<average;
    return 0;
}
