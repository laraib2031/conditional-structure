1.	Write a program to check if a number entered by the user is positive, negative, or zero using if-else.
#include<iostream>
using namespace std;
int main( ){
	int y;
	cout<<"Enter the number:"<<endl;
	cin>>y;
	
	if(y>0){
		cout<<"The number is positive."<<endl;
		
	}else{
		cout<<"The number is negative."<<endl;
	}
	
	return 0;
}
2.	Write a program that takes a number as input and checks whether it is even or odd using if-else.
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x%2==0){
		cout<<"The number is even"<<endl;
		
	}else{
		cout<<"The number is odd"<<endl;
	}
	
	return 0;
}
3.	Write a program to find the largest of three numbers using if-else.
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter the 1 number:"<<endl;
	cin>>x;
	
	cout<<"Enter the 2 number:"<<endl;
	cin>>y;
	
	cout<<"Enter the 3 number:"<<endl;
	cin>>z;
	
	if(x>y && x>z){
		cout<<"The number 1 is largest"<<endl;
		
	}else if(y>x && y>z){
		cout<<"The number 2 is largest"<<endl;
	}else {
		cout<<"The number 3 is largest"<<endl;
	}
	
	return 0;
}
4.	Write a program that asks the user to enter marks and determines the grade using multiple if else: 
• Marks ≥ 90: Grade A
• Marks ≥ 80: Grade B 
• Marks ≥ 70: Grade C 
• Marks ≥ 60: Grade D 
• Otherwise: Fail
Solution:-
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade C" << endl;
    }
    else if (marks >= 60) {
 cout << "Grade D" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
    return 0;
}
5.	Write a program that checks whether a year entered by the user is a leap year or not   using if-else.
#include<iostream>
 using namespace std; 
int main() {
 int year;
 cout<<"Enter Year: "; 
cin>>year;
 if(year%400==0 || year%100!=0 && year%4==0){ 
cout<<"leap year";
 }else{
 cout<<"non leap year";
 }
 return 0;
 }
6.	Write a program to check whether a character entered by the user is a vowel or consonant using if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter Character:";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<"This Alphabet is vowel"<<endl;
	}else {
		cout<<"This Alphabet is conconet";
	}
	
	return 0;
}
7.	Write a program to calculate the electricity bill based on the following conditions: 
•	Up to 100 units: ₹5 per unit 
•	101 to 300 units: ₹7 per unit
•	Above 300 units: ₹10 per unit 
•	Display the total bill.
           #include<iostream>
using namespace std;
int main()
{
	int bill,unit;
	
	cout<<"Enter Unit:";
	cin>>unit;
	
	if(unit<=100){
		bill=unit*5;
		cout<<"Total Bill is:"<<bill;
	}else if(unit<=200){
		bill=unit*7;
		cout<<"Total Bill is:"<<bill;
	}else{
		bill=unit*10;
		cout<<"Total Bill is:"<<bill;
	}
	
	return 0;
}
8.	Write a program that takes an integer from the user and determines whether it is a multiple of both 3 and 5 using if.
#include<iostream>
using namespace std;
int main()
{
    int x;
    
    cout<<"Enter the Number:";
	cin>>x;
	
	if(x%3==0 && x%5==0){
		cout<<"The number is divided by both"<<endl;
	}else{
		cout<<"The number is not inturpted"<<endl;
	}
	
	return 0;
}
9.	Write a program to check whether an is uppercase, entered character lowercase, digit, or special symbol using multiple if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter the Number:";
	cin>>ch;
	
	if(ch>='A'&& ch<='Z'){
		cout<<"The given character is Upper case"<<endl;
	} else if(ch>='a' && ch<='z'){
		cout<<"The given character is Lower case"<<endl;
	}else if(ch>='0' && ch<='9'){
		cout<<"The given character is Numaric"<<endl;
	}else{
		cout<<"The given character is Symbol";
	}
	return 0;
}
10.	Write a program to determine the eligibility of a person to vote based on their age (age ≥ 18 is eligible).
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	
	if(num>=18){
		cout<<"You are eligible to vote";
	}else{
		cout<<"You are not eligible to vote";
	}
	return 0;
}
