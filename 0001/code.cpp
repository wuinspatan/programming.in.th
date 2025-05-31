#include <iostream>
using namespace std; 

//Pototype
string getGrade(int score) ;

int main() {

    int SaveSC, MidSC, FinalSC ;

    cin >> SaveSC >> MidSC >> FinalSC ;

    if ( SaveSC < 0 || MidSC < 0 || FinalSC < 0 || SaveSC > 30 || MidSC > 30 || FinalSC > 40 ) {
        printf("Invalid input !\n") ;
        return 1 ; 
    }

    int SumSC = SaveSC + MidSC + FinalSC ;
    cout << getGrade(SumSC) << endl ;

    return 0 ;
}

//Function
string getGrade(int score) {
    if (score >= 80) return "A" ;
    else if (score >= 75) return "B+" ;
    else if (score >= 70) return "B" ;
    else if (score >= 65) return "C+" ;
    else if (score >= 60) return "C" ;
    else if (score >= 55) return "D+" ;
    else if (score >= 50) return "D" ;
    else return "F" ;
}