# include <stdio.h>

float calculate_simple_interest(int principle, int rate, int time){
    float simple_interest;
    simple_interest = (principle * rate * time) / 100;
    return simple_interest;
}

int main(){
    int principle, rate, time;
    float simple_interest;
   
    printf("Enter value of principle - ");
    scanf("%d", &principle);

    printf("Enter value of rate - ");
    scanf("%d", &rate);

    printf("Enter value of time - ");
    scanf("%d", &time);

    simple_interest = calculate_simple_interest(principle, rate, time);
    
    printf("The interest amount is - %f\n", simple_interest);
    
    return 0;
}


