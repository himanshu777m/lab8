// Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;

//declare function soea=sum of elements of array.
int soea(int x[],int k)
{
	int i,sum=0;
	for(i=0;i<k;i++){
		sum = sum + x[i];
	}
	return sum;
}

int main(){
	//asking for size of array
	int n, i, arr[n];
	cout << "Enter array size: "<<endl;
	cin >> n;
	
	//save value in array
	cout << "Enter the element of array: "<<endl;
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	//calling function
	cout << "Sum of elements of array is: "<< soea(arr, n) <<endl;
}
