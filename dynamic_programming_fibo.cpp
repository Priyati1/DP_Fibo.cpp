#include<iostream>
using namespace std;
//top down solution
int fibo(int n,int *arr){
	//base case
	if(n==0 || n==1){
		return arr[n]=n;
	}
	// calculate karne se phele check
	if(arr[n]!=-1){
		return arr[n];
	}

	//recursive case
	// return karne se phele store
	// arr[n]=fibo(n-1,arr)+fibo(n-2,arr);
	return arr[n]=fibo(n-1,arr)+fibo(n-2,arr);
}
//bottom up solution
int bottom_fibo(int n){
	 int *arr=new int[n+1];
	 arr[0]=0;
	 arr[1]=1;
	 for (int i = 2; i <=n;i++)
	 {
	 	arr[i]=arr[i-1]+arr[i-2];
	 }
	 for (int i = 0; i <=n; i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 int ans=arr[n];
	 delete []arr;
	 return ans;
}
int main(){
	int n;
	cin>>n;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	 cout<<fibo(n,arr)<<endl;
	cout<<bottom_fibo(n)<<endl;
	return 0;
}