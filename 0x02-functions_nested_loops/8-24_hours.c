#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - function that prints every minute of the day
 *n starts from 00:00 to 23:59, hour loop counts hours,
 *minutes loop counts minutes and resets minutes
 *Return:always 0 (success)
*/
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hours_remainder;
int minutes_remainder;
while (hours <= 23)
{
while (minutes <= 59)
{
minutes_remainder = minutes % 10;
hours_remainder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(Minutes_remainder + '0');
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}
