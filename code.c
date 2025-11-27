#include <stdio.h>

int main() {
    char customerName[50];
    char mobile_no[15];
    char vehicle_no[15];
    char fuel_name[20];
    float fuel_quan, totalbill, ppl; 
 // ppl = price per liter

   
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);

    printf("Enter your mobile number: ");
    scanf("%s", mobile_no);

    printf("Enter your vehicle number: ");
    scanf("%s", vehicle_no);

    printf("Enter Fuel name: ");
    scanf("%s", fuel_name);

    printf("Enter Fuel Quantity (in liters): ");
    scanf("%f", &fuel_quan);

    printf("Enter Price Per Liter (e.g., 96.50): ");
    scanf("%f", &ppl);


    totalbill = fuel_quan * ppl;

  
    printf("\n");
    printf("    =====================================================\n");
    printf("                        FUEL BILL RECEIPT               \n");
    printf("    =====================================================\n\n");

    printf("            Customer Name : %s\n", customerName);
    printf("            Mobile No     	: %s\n", mobile_no);
    printf("            Vehicle No    	: %s\n", vehicle_no);

    printf("    -----------------------------------------------------\n");
    printf("            Fuel Name     	: %s\n", fuel_name);
    printf("            Quantity      	: %.2f liters\n", fuel_quan);
    printf("            Rate          	: Rs. %.2f per liter\n", ppl);
    printf("    -----------------------------------------------------\n");
    printf("            Total Amount  : Rs. %.2f\n", totalbill);
    printf("    =====================================================\n");
    printf("        Thank you for your visit!Have a safe drive.              \n");
    printf("    =====================================================\n");

    return 0;
}
