#include<iostream>
using namespace std;
int main(){
    int totalSum = 0;
    int sizeOfarr = 10;
    int arr[sizeOfarr] = {10,20,30,40,50,60,70,80,90,100};
    for ( int i = 0; i < sizeOfarr; i++ ){
        totalSum += arr[i];
    }
    cout<<"The Total Sum of the List is : "<<totalSum;
}
