// Calculate weighted average Note 1 = 2 weight / Note 2 = 3 weight / Note 3 = 5 weight

#include <stdio.h>

int main() {
// Data input
float Note1; // Note 1 variable
printf("Enter Note 1: ");
scanf("%f", &Note1);
float Note2; // Note 2 variable
printf("\nEnter Note 2: ");
scanf("%f", &Note2);
float Note3; // Note 3 variable
printf("\nEnter Note 3: ");
scanf("%f", &Note3);

// Processing
float Score = (Note1*2 + Note2*3 + Note3*5)/10; // Calculation of weighted average using weights 2/3/5 respectively

// Output data
printf("\nThe weighted average resulted in: %.2f\n", Score); // Result
if (Score > 6){ // Approval condition
printf("\nCongratulations! You have been approved!!!");
}
else{
printf("\nYou have been Disapproved!!");
}
return 0;
}
