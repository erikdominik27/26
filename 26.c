#include <stdio.h>

int checking(int number);

int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (checking(number) == 1){
        printf("The number you entered is a perfect number.");
    }

    else {
        printf("The number you entered is not a perfect number.");
}
}

int checking(int number)
{
    int sum=0;
    for (int i = 1; i < number; i++){
        if (number % i == 0)
        sum +=i;  
    }

    if (sum == number){
        return 1;
    }

    else {
        return 0;
    }
}