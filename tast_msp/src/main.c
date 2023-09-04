#include <msp430.h>
#include <init.h>
#include <test.h>
#include <state.h>

enum task_state state;

int main()
{
    WDTCTL = WDTPW | WDTHOLD; // stop watchdog timer
    init();
    while (1)
    {
        switch (state)
        {
        case Stay:

            break;
        case Test:
            test();
            break;
        default:
            break;
        }
    }

    return 0;
}