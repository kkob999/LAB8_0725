#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,its,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> its;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	double PB = loan, inter,total,NB;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	
	for(int i = 0; i>=0; i++){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << PB;
		inter = PB * (its/100);
		cout << setw(13) << left << inter;
		total = PB + inter;
		cout << setw(13) << left << total;
		if(total<pay){
			pay = total;
		}
		cout << setw(13) << left << pay;
		NB = total - pay;
		cout << setw(13) << left << NB;
		cout << "\n";
		PB = NB;
		if(NB<=0) break;
		
	}

	
	
	
	return 0;
}
