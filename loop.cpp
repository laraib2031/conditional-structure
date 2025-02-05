1.	Write a program to print numbers from 1 to 10 using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int x;
    for(x=0;x<=10;x++){
    	cout<<x<<endl;
	}
	return 0;
}
2.	Write a program to find the sum of the first n natural numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1; i<=n;i++){
    	cout<<i<<endl;
    	sum+=n;
	}
	cout<<"The sum of natural number is:"<<sum<<endl;
	return 0;
}
3.	Write a program to print the multiplication table of a number entered by the user using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=10;i++){
    	cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
4.	Write a program to print the factorial of a number using a while loop
#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1,i;
    cout<<"Enter The Number:";
    cin>>n;
    
    i=n;
    while(i>0){
    	factorial=factorial*i;
    	i--;
	}
    
   cout<<"The factorial of"<<n<<"is"<<factorial<<endl;
	return 0;
}
5.	Write a program to reverse a given number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter The value:";
    cin>>n;
    
    while(n>0){
    	rev=rev*10+n%10;
    	n=n/10;
	}
	cout<<"The reverse number is:"<<rev<<endl;
	
	return 0;
}
6.	Write a program to check whether a number is prime or not using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	if(n%i==0){
    		count++;
    		
		}
	}
	if(count==2){
		cout<<"is the prime number";
	}else{
		cout<<"is not the prime number";
	}
    
	return 0;
}
7.	Write a program to calculate the sum of digits of a number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter The Number:";
    cin>>n;
    
    while(n>0){
    	digit=n%10;
    	sum=sum+digit;
    	n/-10;
	}
	cout<<"The sum of digits:"<<sum<<endl;
    
	return 0;
}
8.	Write a program to print the Fibonacci series up to n terms using a for loop.

#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter The Number:";
    cin>>n;
     
     cout<<"Fabarconnic series"<<endl;
     
     for(int i=1;i<=n;i++){
     	cout<<first<<endl;
     	next=first+second;
     	first=second;
     	second=next;
	 }
	 cout<<endl;
9.	Write a program to display the sum of even numbers between 1 and 50 using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=2;i<=50;i+=2){
    	cout<<i<<endl;
    	sum+=i;
	}
	cout<<"Total sum of number is"<<sum<<endl;
	
}
	return 0;
}
10.	Write a program to generate the following pattern using a nested for loop: 
*
 * *
 * * *
 * * * *
 * * * * *
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
