// Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
#include<iostream>
using namespace std;

//sorting the array in assending order
void sorting(int array[],int size){ 
int i,j,p; 
for(i=0; i<size; i++){ 
	p=array[i]; 		//assign array[i] as p
	for(j=i+1;	j<size;	j++){ 
		if(array[j]<array[i]){ 		
			p=array[j]; 		//change value of p as array[j]
			array[j]=array[i]; 	//alternate value of array[i] and array[j]
			array[i]=p; 
		} 
	} 
} 
} 
 
//define function for kth largest element
int klarge(int array[], int size, int k){ 
int q; 
	q=array[size-k]; 
return q;
}	 


 
//define function for kth smallest element
int ksmall(int array[],int size, int k){ 
int q; 
	q=array[k-1]; 
return q;  
} 

//main function 
int main(){ 
	int k1, k2;
	//asking for size of array
	int n, i;	//n=size
	cout << "Enter array size: "<<endl;
	cin >> n;
	int arr[n];
	
	//save value in array
	cout << "Enter the element of array: "<<endl;
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cout<<"Enter the k for largest"<<endl; 
	cin>>k1;
	cout << "Enter the k for smallest"<<endl;
	cin>>k2;

	cout<< k1 <<"th Largest number is :"<<klarge(arr, n, k1)<<endl; 
	cout<< k2 <<"th Smallest number is :"<<ksmall(arr, n, k2)<<endl; 

return 0; 
} 