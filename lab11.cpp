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


   cout << "Input starting balance:"; 

   cin >> startDeposit; 

   cout << "Input annual interest rate:"; 

   cin >> annualInterestRate; 

   startBal = startDeposit;

   mInterestRate = annualInterestRate/12;


   for(int i = 0;i < 3;i ++) 

   {

    cout << "\nMonth: " << i+1 << "" << endl;

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

   cout << "Starting balance: " << startBal << endl;

   cout << "Total deposits: " << totalDepositAmt << endl;

   cout << "Total withdrawals: " << totalWithdrawlAmt << endl;

   cout << "Total interest: " << totalInterest << endl;

   cout << "Final Balance: " << startDeposit << endl;
    
   return 0;
 
    }

  }

double getDeposit() 

{

double amtDeposit;
double amtwithdrawn;



while(true)

{

cout << "How much money was deposited this month?: ";

    cin >> amtDeposit;

    if(amtDeposit < 0)

   cout << "Please enter a positive number." << endl;

cout << "How much money was withdrawn this month?: ";

    cin >> amtwithdrawn;

   if(amtwithdrawn < 0)

   
  cout << "Please enter a positive number." << endl;

}
  
 if (amtwithdrawn > startDeposit)
    
{

cout << "Please enter a number less than the balance of the account." << startDeposit << "" <<endl;

}

else

return amtwithdrawn;

}



