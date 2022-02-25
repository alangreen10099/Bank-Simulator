// This is a simple Bank Simulator.  It is used for scambaiting Tech 
// Support, Amazon, Norton, or Paypal scammers. When the scammers asks a 
// scambaiter to go to their bank, instead of going to the banks website, 
// tell them that you have a special connection to your bank and that you 
// can get your balance sheet through that special connection. It will 
// leave the scammer baffled as to how to change the numbers.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  printf("\r\n");
  printf("Press any key to retrieve bank records\r\n");
  getchar();
  printf("Please wait retrieving data from bank server...\r\n");
  sleep(3);
  printf("First National Bank of Omaha\r\n");
  printf("14010 FNB Parkway\r\n");
  printf("Omaha, Nebraska,  68103-0707\r\n");
  printf("\r\n");
  printf("Chequing Account Statement\r\n");
  printf("Page: 1 of 1\r\n");
  printf("Account No.: 0003944839-293-323-84-7\r\n");
  printf("Statement period 2022-01-01 to 2022-01-31\r\n");
  printf("\r\n");
  printf("Allen Wrench\r\n");
  printf("573 Broome St.\r\n");
  printf("New York, NY,  10013\r\n");
  printf("\r\n");
  printf("Date       Description                    Ref.  Withdrawals   Deposits   Balance\r\n");
  printf("2022-01-01 Previous balance                                              10,230.54\r\n");
  printf("2022-01-02 Payroll Deposit                2392                3435.23    13665.77\r\n");
  printf("2022-01-13 ATM Withdrawal - INTERAC       4738    500.00                 13165.77\r\n");
  printf("2022-01-13 ATM Withdrawal - INTERAC       5638    500.00                 12165.77\r\n");
  printf("2022-01-14 Purchase Macy's                8747    539.30                 11165.77\r\n");
  printf("2022-01-17 ATM Withdrawal - INTERAC       2859    500.00                 10165.77\r\n");
  printf("2022-01-19 ATM Withdrawal - INTERAC       9191    500.00                  9165.77\r\n");
  printf("2022-01-20 ATM Withdrawal - INTERAC       9293    500.00                  8165.77\r\n");
  printf("2022-01-23 ATM Withdrawal - INTERAC       9434    500.00                  7165.77\r\n");
  printf("2022-01-23 ATM Withdrawal - INTERAC       2555    500.00                  7065.77\r\n");
  printf("2022-01-25 ATM Withdrawal - INTERAC       5046    500.00                  6165.77\r\n");
  printf("2022-01-31 ATM Withdrawal - INTERAC       7278    500.00                  5165.77\r\n");
  printf("\r\n");
  printf("Thank you and have a nice day.\r\n");
  getchar();

  return 0;
}

