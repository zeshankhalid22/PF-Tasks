// A Vending machine has diffirent Flavors with Diffirent sizes, you put budget and
// choices will be open for you to buy your preffered flavor with size.
//  if your budget is ended, machine will be stopped
#include "stdio.h"
void calCulateBill(int budget) {
    int type, flavor, size;
    int totalBudget=budget;
    int totalBIll=0;
    while (budget >= 200) {
        printf("Enter ice Cream type:\n0.Exit\n1.Cone\n2.Cups\n");
        scanf("%d", &type);
        if (type == 0) {
            printf("Want to exit? No problem!\n");
            break;
        } else if (type == 1) {
            printf("Cone Selected\nnow enter flavor:\n0.Exit\n1.Chocolate\n2.Vanilla\n3.Strawberry\n4.Oreo\n");
            scanf("%d", &flavor);
            switch (flavor) {
                case 0:
                    printf("Want to exit? No problem!\n");
                    break;
                case 1:
                    printf("Chocolate Selected");
                    if (budget < 200){
                        printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                    break;}
                    else
                        budget -= 200;
                    break;
                case 2:
                    printf("Vanilla Selected");
                    if (budget < 250) {
                        printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                        break;
                    } else
                        budget -= 250;
                    break;
                case 3:
                    printf("Strawberry Selected");
                    if (budget < 200) {
                        printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                        break;
                    } else
                        budget -= 200;
                    break;
                case 4:
                    printf("Oreo Selected");
                    if (budget < 250) {
                        printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                        break;
                    } else
                        budget -= 250;
                    break;
                default:
                    printf("\nInvalid flavor");
            }
        }
        if (type == 2) {
            printf("Cups Selected\nnow enter flavor:\n0.Exit\n1.Chocolate\n2.Vanilla\n3.Strawberry\n4.Oreo");
            scanf("%d", &flavor);
            switch (flavor) {
                case 0:
                    printf("Want to exit? No problem!\n");
                    break;
                case 1:
                    printf("Chocolate Selected\nnow enter size\n0.Exit\n1.Small\n2.Medium\n3.Large");
                    scanf("%d", &size);
                    switch (size) {
                        case 0:
                            printf("Want to exit? No problem!\n");
                            break;
                        case 1:
                            printf("Small Chocolate Selected");
                            if (budget < 200){
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;}
                            else
                                budget -= 200;
                            break;
                        case 2:
                            printf("Medium Chocolate Selected");
                            if (budget < 250) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            } else
                                budget -= 250;
                            break;
                        case 3:
                            printf("Large Chocolate Selected");
                            if (budget < 300) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            } else
                                budget -= 300;
                            break;
                        default:
                            printf("\nInvalid size\n");
                    }
                    break;

                case 2:
                    printf("Vanilla Selected\nnow enter size\n0.Exit\n1.Small\n2.Medium\n3.Large");
                    scanf("%d", &size);
                    switch (size) {
                        case 0:
                            printf("Want to exit? No problem!\n");
                            break;
                        case 1:
                            printf("Small Vanilla Selected");
                            if (budget < 250) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            } else
                                budget -= 250;
                            break;
                        case 2:
                            printf("Medium Vanilla Selected");
                            if (budget < 300) {
                                printf("Not enough budget.Only %d RS left.\n", budget);
                                break;
                            } else
                                budget -= 300;
                            break;
                        case 3:
                            printf("Large Vanilla Selected");
                            if (budget < 350) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 350;
                            break;
                        default:
                            printf("\nInvalid size\n");
                    }
                    break;

                case 3:
                    printf("Strawberry Selected\nnow enter size\n0.Exit\n1.Small\n2.Medium\n3.Large");
                    scanf("%d", &size);
                    switch (size) {
                        case 0:
                            printf("Want to exit? No problem!\n");
                            break;
                        case 1:
                            printf("Small Strawberry Selected");
                            if (budget < 200) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 200;
                            break;
                        case 2:
                            printf("Medium Strawberry Selected");
                            if (budget < 250) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 250;
                            break;
                        case 3:
                            printf("Large Strawberry Selected");
                            if (budget < 300) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 300;
                            break;
                        default:
                            printf("\nInvalid size\n");
                    }
                    break;

                case 4:
                    printf("Oreo Selected\nnow enter size\n0.Exit\n1.Small\n2.Medium\n3.Large");
                    scanf("%d", &size);
                    switch (size) {
                        case 0:
                            printf("Want to exit? No problem!\n");
                            break;
                        case 1:
                            printf("Small Oreo Selected");
                            if (budget < 250) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 250;
                            break;
                        case 2:
                            printf("Medium Oreo Selected");
                            if (budget < 300) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                               break;
                            }
                            budget -= 300;
                            break;
                        case 3:
                            printf("Large Oreo Selected");
                            if (budget < 400) {
                                printf("\n!!!Not enough budget.Only %d RS left.\n", budget);
                                break;
                            }
                            budget -= 400;
                            break;
                        default:
                            printf("\nInvalid size\n");
                    }
                    break;
                default:
                    printf("\nInvalid flavor choice\n");
            }
        } else {
            printf("Invalid type\n");
        }
    totalBIll=totalBudget-budget;
        printf("\n..........Your totalBIll is %d .......... \n",totalBIll);
    }
}

int main(){
    int budget;
    printf("Enter your budget: ");
    scanf("%d",&budget);
    calCulateBill(budget);
}
