#include<iostream>
#include<string>
using namespace std;

int main(){
	int i = 0 ;
	string grade ;
	int count[5] = {} ; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i+1 << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A") { // if grade is A
			count[0]++ ;
			//Do something
		}else if(grade == "B"){ // if grade is B
			count[1]++ ;
			//Do something
		}else if (grade == "C"){
			count[2]++;
		}else if (grade == "D"){
			count[3]++ ;
		//and so on ... for grade = C, D, F	
		}else if (grade == "F"){
			count[4] ++ ;
		
			 // grade is wrong input
			//Do something 
		} else if (grade == "0")
		{
			break;	
		}else {
		cout << "Wrong input. Please input again.\n" ;
		continue;
		}
		
		i++; 
		
	}while(true);
	
	
	cout << "In total " << count[0]+ count[1] + count [2] + count [3] + count [4] + count [5]  << " students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";	
	cout << "D = " << count[3] <<",";	
	cout << "F = " << count[4] <<",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
