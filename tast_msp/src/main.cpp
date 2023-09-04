#include <msp430.h>

int main()
{
  WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer
  return 0;
}