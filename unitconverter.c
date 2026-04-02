#include <stdio.h>

int main() {
    int choice, subchoice;
    float value, result;
    char again;

    do {
        printf("\n--- UNIT CONVERTER ---\n");
        printf("1. Length Conversion\n");
        printf("2. Mass Conversion\n");
        printf("3. Temperature Conversion\n");
        printf("4. Time Conversion\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nLength Conversion:\n");
                printf("1. Meter to Kilometer\n");
                printf("2. Kilometer to Meter\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                printf("Enter value: ");
                scanf("%f", &value);

                if(subchoice == 1)
                    result = value / 1000;
                else if(subchoice == 2)
                    result = value * 1000;

                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("\nMass Conversion:\n");
                printf("1. Gram to Kilogram\n");
                printf("2. Kilogram to Gram\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                printf("Enter value: ");
                scanf("%f", &value);

                if(subchoice == 1)
                    result = value / 1000;
                else if(subchoice == 2)
                    result = value * 1000;

                printf("Result = %.2f\n", result);
                break;
case 3:
                printf("\nTemperature Conversion:\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                printf("Enter value: ");
                scanf("%f", &value);

                if(subchoice == 1)
                    result = (value * 9/5) + 32;
                else if(subchoice == 2)
                    result = (value - 32) * 5/9;

                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("\nTime Conversion:\n");
                printf("1. Seconds to Minutes\n");
                printf("2. Minutes to Seconds\n");
                printf("Enter choice: ");
                scanf("%d", &subchoice);

                printf("Enter value: ");
                scanf("%f", &value);

                if(subchoice == 1)
                    result = value / 60;
                else if(subchoice == 2)
                    result = value * 60;

                printf("Result = %.2f\n", result);
                break;

            default:
                printf("Invalid Choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("Program Ended.\n");
    return 0;
}
