# include <stdio.h>

float calculate_simple_interest(int principle, int rate, int time){
    /* Calculates simple interest

    It will calculate the simple interest based on the given principle amount,
    rate of interest and time.

    Parameters -
    ----------
    principle - <Integer> principle amount
    rate - <Integer> rate at which interest is to be calculated
    time - <integer> time for which interest is to be calculated

    */
    float simple_interest;

    simple_interest = (principle * rate * time) / 100;

    return simple_interest;
}

int main(){
    int principle, rate, time;
    float simple_interest;

    // Accept Inputs
    printf("Enter value of principle - ");
    scanf("%d", &principle);

    printf("Enter value of rate - ");
    scanf("%d", &rate);

    printf("Enter value of time - ");
    scanf("%d", &time);

    // Calculate simple interest
    simple_interest = calculate_simple_interest(principle, rate, time);
    
    printf("The interest amount is - %f\n", simple_interest);
    
    return 0;
}
