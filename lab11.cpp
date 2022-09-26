#include <iostream> 

#include <string> 

#include <cmath> 

using namespace std;

double getWithdrawal;

double (startDeposit);

double getDeposit(); 

int main () 

{

   double totalDepositAmt, totalWithdrawlAmt, totalInterest;

   double amtDeposit, amtWithdrawn, mInterest;

   double startDeposit, annualInterestRate, startBal;

   double mInterestRate, mstart, mend;


   cout << "Input starting balance:" << endl; 

   cin >> startDeposit; 

   cout << "Input annual interest rate:" << endl; 

   cin >> annualInterestRate; 

   startBal = startDeposit;

   mInterestRate = annualInterestRate/12;


   for(int i = 0;i < 3;i ++) 

   {

    cout << "\nMonth: 1" << i+1 << "" << endl;

    amtDeposit = getDeposit();

    mstart = startDeposit;

    startDeposit += amtDeposit;

    totalDepositAmt += amtDeposit;

   

    amtWithdrawn = getWithdrawal;

    startDeposit = amtWithdrawn;

    totalWithdrawlAmt += amtWithdrawn;

    mend = startDeposit;

    mInterest = ((mstart+mend)/2) * (mInterestRate/100);

    startDeposit += mInterest;

    totalInterest += mInterest;

   }

  {

   cout << "How much money was deposited this month?" << startBal << endl;
   cout << "How much money was withdrawn this month?" << amtWithdrawn << endl;
   cout << "Starting balance: " << totalDepositAmt << endl;

   cout << "Total withdrawals: " << totalWithdrawlAmt << endl;

   cout << "Total interest: " << totalInterest << endl;

   cout << "Final Balance: " << startDeposit << endl;
    
   return 0;
 
    }

  }

double getDeposit() 

{

double amtDeposit;


while(true)

{

cout << "Enter total amount deposited: ";

    cin >> amtDeposit;

    if(amtDeposit < 0)

   cout << "Invalid data. Must be a positive number." << endl;

else

   return amtDeposit;

}

 

}


double getWithdrawl(double startDeposit)

{

double amtwithdrawn;

while(true)

{

cout << "Enter total amount withdrawn: ";

    cin >> amtwithdrawn;

   if(amtwithdrawn < 0)

   {

    cout << "Invalid data.Must be positive" << endl;

}

else if(amtwithdrawn > startDeposit)

{

cout << "Invalid data.Withdrawl amount must be less than or equal to balance." << startDeposit << "" <<endl;

}

else

return amtwithdrawn;

}

}
