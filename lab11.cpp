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

   cout << "\nInput annual interest rate:"; 

   cin >> annualInterestRate; 

   startBal = startDeposit;


   mInterestRate = annualInterestRate/12;


   for(int i = 0;i < 3;i ++) 

   {

    cout << "\nMonth: " << i+1 << "";

    amtDeposit = getDeposit();

    startDeposit;


    totalDepositAmt += amtDeposit;

   

    amtWithdrawn = getWithdrawal;

    startDeposit;

    totalWithdrawlAmt += amtWithdrawn;

    mend = startDeposit;

    mInterest = (amtDeposit + amtWithdrawn )/2 * (mInterestRate);

    startDeposit += mInterest;

    totalInterest += mInterest;
    

   }

  {

   cout << "\nStarting balance: " << startBal;

   cout << "\nTotal deposits: " << totalDepositAmt << endl;

   cout << "Total withdrawals: " << amtWithdrawn << endl;

   cout << "Total interest: " << mInterest << endl;

   cout << "Final Balance: " << totalDepositAmt - amtWithdrawn << endl;
    
   return 0;
 
    }

  }

double getDeposit() 

{

double amtDeposit;

double amtwithdrawn;  

while(true)

{

cout << "\nHow much money was deposited this month? ";

    cin >> amtDeposit;

cout << "\nHow much money was withdrawn this month?";

    cin >> amtwithdrawn;
   
  return amtDeposit, amtwithdrawn;
  }
  
  {
if (amtwithdrawn > 0) 
cout << "Please enter a number less than the balance of the account." << startDeposit << "" <<endl;
  
{
if(amtDeposit < 0)
    cout << "Please enter a positive number." << endl;



else if(amtwithdrawn > startDeposit)
     
{

cout << "Please enter a number less than the balance of the account." << startDeposit << "" <<endl;

}


return 0;

}

}

  } 
  
