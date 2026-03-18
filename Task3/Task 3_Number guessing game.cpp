#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int SecretNumber, guess;
	
	srand(time(0));
	SecretNumber = rand() % 100 + 1;
	
	cout<<"\n========================  \n";
	cout<< "  NUMBER GUESSING GAME  \n";
	cout<<"========================  \n"<< endl;
	
	cout<<" Guess a number between 1 and 100 "<<endl;
	
	do{
		cout<<"\n Enter your guess: ";
		cin>>guess;
		
		if(guess>SecretNumber){
			cout<<" Too High! Try again."<<endl;
		}
		else if(guess<SecretNumber){
			cout<<" Too Low! Try again."<<endl;
		}
		else{
			cout<<"\n Congratulations! You guessed the correct number!"<<endl;
		}
		
	} while(guess != SecretNumber );
	
	return 0;

}


