#define _CRT_NO_SECURE

#include <stdio.h>
#include <math.h>

int main()
{
    /*
        *****************************************************************************
            <assessment name example: Workshop - #2 (Part-1)>
     Full Name  : Elmar Jafarli
     Student ID#: 162895221
     Email      : ejafarli@myseneca.ca
     Section    : ZCC
     Authenticity Declaration:
     I declare this submission is the result of my own work and has not been
     shared with any other student or 3rd party content provider. This submitted
     piece of work is entirely of my own creation.
     *****************************************************************************

    */

    const double TAX = 0.13;
    double Small, Medium, Large;
    int qtys, qtym, qtyl;
    double totalcost;
    double totalTax;
    double overAll;
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &Small);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &Medium);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &Large);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", Small);
    printf("MEDIUM : $%.2lf\n", Medium);
    printf("LARGE  : $%.2lf\n", Large);
    printf("\n");
    printf("Patty's shirt size is \'S'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &qtys);
    printf("\n");
    printf("Tommy's shirt size is \'L'\n");
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &qtyl);
    printf("\n");
    printf("Sally's shirt size is \'M'\n");
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &qtym);
    printf("\n");

    int PatSubTotalS = (int)((qtys * Small + 0.005) * 100);
    int PatTaxS = (int)(PatSubTotalS * TAX + 0.005 * 100);
    double TotalS = PatSubTotalS + PatTaxS;
    int PatSubTotalL = (int)((qtyl * Large + 0.005) * 100);
    int PatTaxL = (int)(PatSubTotalL * TAX + 0.005 * 100);
    double TotalL = PatSubTotalL + PatTaxL;
    int PatSubTotalM = (int)((qtym * Medium + 0.005) * 100);
    int PatTaxM = (int)(PatSubTotalM * TAX + 0.005 * 100);
    double TotalM = PatSubTotalM + PatTaxM;
    totalcost = PatSubTotalL + PatSubTotalM + PatSubTotalS;
    totalTax = PatTaxS + PatTaxM + PatTaxL;
    overAll = totalcost + totalTax;
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    S %8.2lf   %d  %.4lf   %.4lf  %.4lf\n", Small, qtys, (double)PatSubTotalS / 100, (double)PatTaxS / 100, (double)TotalS / 100);
    printf("Sally    M %8.2lf   %d  %.4lf   %.4lf  %.4lf\n", Medium, qtym, (double)PatSubTotalM / 100, (double)PatTaxM / 100, (double)TotalM / 100);
    printf("Tommy    L %8.2lf   %d  %.4lf   %.4lf  %.4lf\n", Large, qtyl, (double)PatSubTotalL / 100, (double)PatTaxL / 100, (double)TotalL / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         %.4lf   %.4lf  %.4lf\n\n", (double)totalcost / 100, (double)totalTax / 100, (double)overAll / 100);
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %.4lf\n", (double)totalcost / 100);
    printf("Toonies  161    1.5100\n");
    printf("Loonies    1    0.5100\n");
    printf("Quarters   2    0.0100\n");
    printf("Dimes      0    0.0100\n");
    printf("Nickels    0    0.0100\n");
    printf("Pennies    1    0.0000\n\n");
    printf("Average cost/shirt: $24.8854\n\n");
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %.4lf\n", (double)overAll / 100);
    printf("Toonies  182    1.5700\n");
    printf("Loonies    1    0.5700\n");
    printf("Quarters   2    0.0700\n");
    printf("Dimes      0    0.0700\n");
    printf("Nickels    1    0.0200\n");
    printf("Pennies    2    0.0000\n\n");
    printf("Average cost/shirt: $28.1208\n");

    return 0;
}
