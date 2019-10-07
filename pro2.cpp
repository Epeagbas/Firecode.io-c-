
//fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... The next number//is found by adding up the two numbers before it. Write a recursive function fib(n) that returns  //the nth Fibonacci number. n is 0 indexed, which means that in the sequence 0, 1, 1, 2, 3, 5, 8,  //13, 21, 34, ..., n == 0 should return 0 and n == 3 should return 2. Assume n is less than 15.

#include<iostream>
#include<iomanip>

int arr[]={0,1,1,2,3,5};
int arr_size=sizeof(arr)/sizeof(arr[0]);

int fib(int n){
	if(n<=2){
		return arr[n];
	}
	else{
		n=n-1;
		return fib(n)+fib(n-1);
	}
}

int main(){
		int n;
		std::cout<<"fibonacci sequence index n: "<<std::endl;
		std::cin>>n;
		std::cout<<"fibonacci sequence index "<<n<<" the value is: ";
		int final_sol=fib(n);
		std::cout<<final_sol<<std::endl;
	return 0;
}
