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


   cout << "Enter the total amount deposited this month:"; 

   cin >> startDeposit; 

   cout << "Enter the Annual Interest Rate:"; 

   cin >> annualInterestRate; 

   startBal = startDeposit;

   mInterestRate = annualInterestRate/12;


   for(int i = 0;i < 3;i ++) 

   {

    cout << "\nMonthnumber" << i+1 << "" << endl;

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

   cout << "Starting balance at the beginning of the three-month period: " << startBal << endl;

   cout << "Total deposits made during the three-month period: " << totalDepositAmt << endl;

   cout << "Total withdrawals made during the three-month period: " << totalWithdrawlAmt << endl;

   cout << "Total interest posted to the account during the three months: " << totalInterest << endl;

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

cout << "Enter total amount withdrawl: ";

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
