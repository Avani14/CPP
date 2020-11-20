#include <iostream>
using namespace std;
int main(){
    int num = 4;
    int guess;
    int count;
    count = 0;
    cout<<"Enter your guess!!\n";
    cin>>guess;
    count++;
    if(guess != num){
        while(count<=3){
        cout<<"You guessed wrong \nNumber of trials left : "<<(3-count)<<"\nTry again\n";
        cin>>guess;
        count++;
        if((3-count)==0){
            cout<<"You are out of trials!!";
            break;
        }
    }
    }
    else if(guess == num){
    cout<<"You guessed right !!";}
    return 0;
}