#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  printf("\r\n");
  printf("Press any key to retrieve Bitcoin records\r\n");
  getchar();
  printf("Please wait retrieving data from Bitcoin wallet...\r\n");
  sleep(3);
  printf("Currently you have 2.4535 Bitcoins.\r\n");
  printf("Your private key is:\r\n");
  printf("4433d156e8c53bf5b50af07aa95a29436f29a94e0ccc5d58df8e57bdc8583c32\r\n");
  printf("This key belongs to Allen Wrench\r\n");
  printf("Do not share this key with anyone.  Keep this key private.\r\n");
  getchar();

  return 0;
}

