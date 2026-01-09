#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_ten(int cents);
int calculate_five(int cents);
int calculate_one(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25); // To find how much money left
    int ten = calculate_ten(cents);  // For defining to a variable
    cents = cents - (ten * 10);
    int five = calculate_five(cents);
    cents = cents - (five * 5);
    int one = calculate_one(cents);
    cents = cents - (one * 1);

    int result = ten + quarters + five + one; // Print Variable
    printf("%i\n", result);                   // Result.
}

int calculate_quarters(int cents) // Calculates quarters
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_ten(int cents) // Calculates ten cents
{
    int ten = 0;
    while (cents >= 10)
    {
        ten++;
        cents = cents - 10;
    }
    return ten;
}

int calculate_five(int cents) // Calculates five cents
{
    int five = 0;
    while (cents >= 5)
    {
        five++;
        cents = cents - 5;
    }
    return five;
}

int calculate_one(int cents) // Calculates one cents
{
    int one = 0;
    while (cents >= 1)
    {
        one++;
        cents = cents - 1;
    }
    return one;
}
