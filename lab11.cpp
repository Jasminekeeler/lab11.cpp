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

   double mstart, mend;


   cout << "\nInput starting balance:"; 

   cin >> startDeposit; 

   cout << "\nInput annual interest rate:"; 

   cin >> annualInterestRate; 

   startBal = startDeposit;

   


   for(int i = 0;i < 3;i ++) 

   {

    cout << "\nMonth: " << i+1 << "";

    amtDeposit = getDeposit();

    mstart = startDeposit;

    startDeposit += amtDeposit;

    totalDepositAmt += amtDeposit;

   

    amtWithdrawn = getWithdrawal;

    startDeposit = amtWithdrawn;

    totalWithdrawlAmt += amtWithdrawn;

    mend = startDeposit;

    mInterest = ((100+120)/2) * (annualInterestRate/12);

    startDeposit += mInterest;

    totalInterest += mInterest;

   }

  {

   cout << "Starting balance: \n" << startBal;

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
  
