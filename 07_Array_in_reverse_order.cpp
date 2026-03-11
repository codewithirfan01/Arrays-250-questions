#include<iostream>
#include<climits>
using namespace std;
int main(){
    int SizeOfArr = 6;
    int largestNum = INT_MIN;
    int arr[SizeOfArr] = {2,5,4,1,3,5};
    int i = 0;
    while(i < SizeOfArr){
    	if (arr[i] > largestNum){
    		largestNum = arr[i];
		}
		i++;
	}
	cout<<largestNum;
    
}
