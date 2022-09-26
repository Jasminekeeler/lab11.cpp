#include <iostream> 

#include <string>

#include <cmath> 

using namespace std;

double getWithdrawl(double startBal);

double getDeposit(); 

int main () 

{


  double totDepositAmt,totWithdrawlAmt,totInterest;

  double mAmtDeposit,mAmtwithdrawl,mInterest;

  double startBal,AnnInterestRate,sbal;

  double mInterestRate,mstart,mend;

   

  cout << "Input starting balance: "; 

  cin >> startBal; 

  cout << "Input annual interest rate: "; 

  cin >> AnnInterestRate; 

 sbal = startBal;

  mInterestRate = AnnInterestRate/12;


  for(int i = 0;i < 3;i++) 

  {
       

  cout << "\nMonth#" << i+1 << " :" << endl;

  mAmtDeposit = getDeposit();

  mstart = startBal;

  startBal += mAmtDeposit;

  totDepositAmt += mAmtDeposit;

  mAmtwithdrawl=getWithdrawl(startBal);

  startBal -= mAmtwithdrawl;

 totWithdrawlAmt += mAmtwithdrawl;

mend = startBal;

 mInterest = ((mstart+mend)/2) * (mInterestRate/100);

startBal += mInterest;

    totInterest += mInterest;

   }

{
   cout << "Starting balance: " << sbal << endl;

   cout << "Total deposits: " << totDepositAmt << endl;

   cout << "Total withdrawals: " << totWithdrawlAmt << endl;

   cout << "Total interest: " << totInterest << endl;

   cout << "Final Balance: " << startBal << endl;

   

   return 0;

}

 

double getDeposit() 


{

  double mAmtDeposit;


while(true)

 {

cout << "How much money was deposited this month?";

    cin >> mAmtDeposit;

    if(mAmtDeposit < 0)

   cout << "Please enter a positive number." << endl;

else

   return mAmtDeposit;

 }

 

}


double getWithdrawl(double startBal)

{

double mAmtwithdrawl;

while(true)

{

cout << "How much money was withdrawn this month?";

    cin >> mAmtwithdrawl;

   if(mAmtwithdrawl < 0)

   {

    cout << "Please enter a positive number." << endl;

}

else if(mAmtwithdrawl > startBal)

{

cout << "Please enter a number less than the balance of the account." << startBal << ""<< endl;

}

else

return mAmtwithdrawl;

}

}
