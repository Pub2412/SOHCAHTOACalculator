#include <iostream>
using namespace std;

int main ()
{
    // Declare Variables
    int n = 5;
    int Sin;
    int Cos;
    int Tan;
    double Adj;
    double Opp;
    double Hyp;
    double TS = 0.0;
    double TC = 0.0;
    double TT = 0.0;

    cout << "\n Your Right Angle Triangle - SOHCAHTOA Finder :DD \n";
    cout << "\n If you are choose an option key in 1 otherwise key in 0\n";
    cout << endl; 

    // Statements
    cout << "\n Finding SINE or Sin(x) ? >> "; 
    cin >> Sin; 
    cout << "\n Finding COSINE or Cos(x)? >> ";
    cin >> Cos; 
    cout << "\n Finding TANGENT or Tan(x)? >> ";
    cin >> Tan; 

    // Conditions and Computations
    if (Sin == 1) {
        cout << " \n What is your Opposite? >> ";
        cin >> Opp;
        cout << "\n What is your Hypotenuse? >> ";
        cin >> Hyp; 
        TS = Opp / Hyp;  
        cout << endl;

    } else if (Cos == 1) {
        cout << " \n What is your Adjacent? >> ";
        cin >> Adj;
        cout << "\n What is your Hypotenuse? >> ";
        cin >> Hyp; 
        TC = Adj / Hyp; 
        cout << endl;

    } else if (Tan == 1) {
        cout << " \n What is your Opposite? >> ";
        cin >> Opp;
        cout << "\n What is your Adjacent? >> ";
        cin >> Adj; 
        TT = Opp / Adj; 
        cout << endl;
    } 

    // Triangle Design
    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int j = 1; j < i; j++)
            cout << "  ";
        for (int j = 1; j <= n - i + 1; j++)
            cout << "* ";
        cout << endl;
    }

    // Output Conditions
    if (TS > 0 && TS <= 1) {
        cout << "\n SINE OR Sin(x) == " << Opp << "/" << Hyp << " or " << TS << endl;

    } else if (TC > 0 && TC <= 1) {
        cout << "\n COSINE OR Cos(x) == " << Adj << "/" << Hyp << " or " << TC << endl;

    } else if (TT > 0 && TT <= 1) {
        cout << "\n TANGENT OR Tan(x) == " << Opp << "/" << Adj << " or " << TT << endl;
    }

    return 0;
}

