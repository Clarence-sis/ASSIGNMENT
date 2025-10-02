/*CLARENCE NJUGUNA
REGISTRATION NO:CT101/G/26491/25
DESCRIPTION:MAKE  DATA BUNDLE PURCHASE 
*/
#include <stdio.h>
 int main() {
    int choice;

    // prompt user to to display menu above
    printf("Available Internet Bundles:\n");
    printf("1. 100 MB   - KES 50\n");
    printf("2. 500 MB   - KES 200\n");
    printf("3. 1 GB     - KES 350\n");
    printf("4. 2 GB     - KES 600\n");

    // prompt user to enter the choices
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // prompt user to use switch statement to display the bundle selected and its cost
    switch (choice) {
        case 1:
            printf("You selected 100 MB - Cost: KES 50\n");
            break;
        case 2:
            printf("You selected 500 MB - Cost: KES 200\n");
            break;
        case 3:
            printf("You selected 1 GB - Cost: KES 350\n");
            break;
        case 4:
            printf("You selected 2 GB - Cost: KES 600\n");
            break;
            
        //prompt user to display invalid choice if the user ents a number outside (1-4)
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}