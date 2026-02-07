#include<iostream>
using namespace std;
int main(){
    int score1, score2, score3;
    cout<<"Enter the score of player 1: ";
    cin>>score1;
    cout<<"Enter the score of player 2: ";
    cin>>score2;
    cout<<"Enter the score of player 3: ";
    cin>>score3;
    int highest_score;
    if(score1>score2 && score1>score3){
        highest_score=score1;
        cout<<"The highest score is: "<<score1<<endl<<"The winner is player1";
    }
    else if(score2>score1 && score2>score3){
        highest_score=score2;
        cout<<"The highest score is: "<<score2<<endl<<"The winner is player2";
    }
    else{
        highest_score=score3;
        cout<<"The highest score is: "<<score3<<endl<<"The winner is player3";
    }
    return 0;
}