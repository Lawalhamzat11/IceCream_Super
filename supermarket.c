//header file for input and output function i.e printf, scanf e.t.c
#include <stdio.h>

//header file for sleep function
#include <windows.h>

//header file for system function i.e system()
#include <conio.h>

//header file for getch function
#include <stdlib.h>   

//Entry point of the program
void main()
{

// Declaration of Ice cream flavours, sizes and prices i.e Menu
int size, flavour, orders;
float num_of_orders, customersCash, customersCash1, change, payment;

//I made the prices of the flavours constant so i can use them later in the program
//And to avoid having errors if prices change overtime
const float chocoSmall = 95.00; 
const float chocoMedium = 105.00, chocoLarge = 115.00;
const float vaniSmall = 100.00, vaniLarge = 120.00, vaniMedium = 110.00;
const float redVelSmall = 110.00, redVelMedium = 120.00, redVelLarge = 130.00;

//Clears the screen to start the program
system("cls");                                                                   

//Interactive Display of the Shop's Menu
printf("*****LISTER\'S FAMOUS MILKEA SHOP*****\n");
printf("\n==========WELCOME TO OUR SHOP==========");
printf("\n\n===================MENU=================");
printf("\nFlavours\t\tSize\n\n");
printf("\t\tS\t M\t L");
printf("\n[1]CHOCOLATE\t$%.2f\t$%.2f\t$%.2f", chocoSmall, chocoMedium, chocoLarge);
printf("\n[2]VANILLA\t$%.2f\t$%.2f\t$%.2f", vaniSmall, vaniMedium, vaniLarge);
printf("\n[3]RED VELVET\t$%.2f\t$%.2f\t$%.2f", redVelSmall, redVelMedium, redVelLarge);

//Prompt customer for flavour
printf("\n\nCHOOSE FLAVOR: ");

//Take flavour input
scanf("%d", &flavour);

//Prompt customer For Size
printf("\n\n**************CHOOSE SIZE**************");
printf("\n[1] SMALL\n\n[2] MEDIUM\n\n[3] LARGE\n\nCHOOSE SIZE: ");

//Scans size Input 
scanf("%d", &size);
printf("\n========================================");

//if the user choose Chocolate flavor, Size: small
if (flavour == 1 && size == 1)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nChocolate\tSmall\t $%.2f", chocoSmall);
    
    //Prompt customer how many orders they want
    printf("\nHOW MANY ORDERS: ");
    
    //scans the number of orders from the customer
    scanf("%d", &orders);

    //Payment Display and Receipt Display
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", chocoSmall * (float)orders);
    printf("\n========================================");

    //prompt customer for Money
    printf("\nYour Cash: $");

    //scans consumer input
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (chocoSmall * (float)orders);


    //keeps prompting the user till change is positive
    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }   

}

else if (flavour == 1 && size == 2)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nChocolate\tMedium\t $%.2f", chocoMedium);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", chocoMedium * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (chocoMedium * (float)orders);
    

    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }
    
 
}


else if (flavour == 1 && size == 3)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nChocolate\tLarge\t $%.2f", chocoLarge);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", chocoLarge * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (chocoLarge * (float)orders);


    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }

}


else if (flavour == 2 && size == 1)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nVanilla\t\tSmall\t $%.2f", vaniSmall);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", vaniSmall * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (vaniSmall * (float)orders);
    
    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;
    
    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }
    
}

else if (flavour == 2 && size == 2)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nVanilla\t\tMedium\t $%.2f", vaniMedium);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", vaniMedium * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (vaniMedium * (float)orders);


    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }
    
}


else if (flavour == 2 && size == 3)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nVanilla\t\tLarge\t $%.2f", vaniLarge);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", vaniLarge * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (vaniLarge * (float)orders);


    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }
    
}


else if (flavour == 3 && size == 1)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nRED VELVET\tSmall\t $%.2f", redVelSmall);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", redVelSmall * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (redVelSmall * (float)orders);
    

    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;
     
    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }
}


else if (flavour == 3 && size == 2)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nRED VELVET\tMedium\t $%.2f", redVelMedium);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", redVelMedium * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (redVelMedium * (float)orders);

    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }

}


else if (flavour == 3 && size == 3)
{
    printf("\nFlavour\t\tSize\t Price");
    printf("\nRED VELVET\tLarge\t $%.2f", redVelLarge);
    printf("\nHOW MANY ORDERS: ");
    scanf("%d", &orders);
    printf("================Payment================");
    printf("\nTotal Payment\t\t\t $%.2f", redVelLarge * (float)orders);
    printf("\n========================================");
    printf("\nYour Cash: $");
    scanf("%f", &customersCash);
    printf("\n========================================");
    change = customersCash - (redVelLarge * (float)orders);
    
    while (change < 0)
    {
    printf("\nInsufficient funds");
    printf("\nBalance: %.2f", -(change));
    printf("\n========================================");
    printf("\nPlease Enter Your Remaining Balance: $");
    scanf("%f", &customersCash1);
    printf("========================================");
    change += customersCash1;

    if (change >= 0)
    {
        printf("\nYour Change: $%.2f", change);
        break;
    }

    }

}


else
{
    printf("\nInvalid input");
    Sleep(5000);
    main();
}

Sleep(3000);
exit(1);

}
