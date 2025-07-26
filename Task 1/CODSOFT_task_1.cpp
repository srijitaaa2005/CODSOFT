/*Create a program that generates a random number and asks the user to guess it. 
Provide feedback on whether the guess is too high or too low until the user guesses the correct number.*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0)); 
    int secret_number = rand() % 100 + 1;

    int num, attempts = 0;
    cout<<"Enter a number between 1-100: ";
    cin>>num;

    do{
        attempts++;
        
        if (num<secret_number) cout<<"\nToo low!"<<endl<<"Try again: ";
        
        else if(num>secret_number)  cout<<"\nToo high!"<<endl<<"Try again: ";
        
        cin>>num;

    } while(num!=secret_number);
    
    attempts++;
    cout<<"\nCorrect!\n\nYou guessed the correct number in "<<attempts<<" attempts.";
    return 0;
}