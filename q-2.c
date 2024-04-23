#include <stdio.h>

int main() {
    int language_choice, service_choice;

    // Display language menu
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language_choice);

    // Display service menu based on language choice
    switch (language_choice) {
        case 1:
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            // Process service choice
            switch (service_choice) {
                case 1:
                    printf("\nYou have successfully done Internet Recharge.\n");
                    break;
                case 2:
                    printf("\nYou have successfully done Top-up Recharge.\n");
                    break;
                case 3:
                    printf("\nYou have successfully done Special Recharge.\n");
                    break;
                default:
                    printf("\nInvalid choice!\n");
                    break;
            }
            break;
        case 2:
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            switch (service_choice) {
                case 1:
                    printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                case 2:
                    printf("\nAapne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;
                case 3:
                    printf("\nAapne safaltapurvak Special Recharge kar liya he.\n");
                    break;
                default:
                    printf("\nInvalid choice!\n");
                    break;
            }
            break;
        case 3:
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            switch (service_choice) {
                case 1:
                    printf("\nTamne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                case 2:
                    printf("\nTamne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;
                case 3:
                    printf("\nTamne safaltapurvak Special Recharge kar liya he.\n");
                    break;
                default:
                    printf("\nInvalid choice!\n");
                    break;
            }
            break;
        default:
            printf("\nInvalid choice!\n");
            break;
    }

    return 0;
}
