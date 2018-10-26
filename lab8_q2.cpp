//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)

#include<iostream>
using namespace std;

//declare function soea=sum of elements of array.
int large(int x[],int k){
	int t,i;
	t=x[0];
	for(i=1;i<k;i++){
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}

int small(int x[],int k){
	int t,i;
	t=x[0];
	for(i=1;i<k;i++){
		if(x[i]<t)
			t=x[i];
	}
	return(t);
}

int mean(int x[],int k){
	int sum=0,i;
	for(i=0;i<k;i++){
		sum += x[i]; 
	}
	return (sum/k);
}

double median(int x[],int k){
	//arr[0],arr[1],.....arr[k-1]
	if(k%2==0){
		return ((x[(k/2)-1] + x[k/2])/2);
	}
	else{
		return x[((k-1)/2)];
	}			
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
	cout << "Largest elements of array is: "<< large(arr, n) <<endl;
	cout << "Smallest elements of array is: "<< small(arr, n) <<endl;
	cout << "Mean of elements of array is: "<< mean(arr, n) <<endl;
	cout << "Median of elements of array is: "<< median(arr, n) <<endl;
}


