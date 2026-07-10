#include <stdio.h>
#include <math.h>

int main()
{
    char initial;
    double principal, rate, simpleInterest, compoundAmount;
    int year;
    float radius, area, circumference;
    float sideA, sideB, hypotenuse;
    int number1, number2;
    int integerDivision;
    double decimalDivision;
    
    // GET INITIAL LETTER
    printf("Enter the first letter of your name: ");
    // reads one char from the keyboard
    initial=getchar();


    // FINANCIAL INFORMATION
    // %lf means that scanf expects a double value
    printf("Enter the principal amount: ");
    scanf("%lf",&principal); // &principal passes the memory address where the input will be stored

    printf("Enter the annual interest rate: ");
    scanf("%lf",&rate);

    printf("Enter the number of years: ");
    scanf("%d",&year);

    // principal + principal's interest
    // Simple interest: Principal + Principal * interest rate * years / 100
    simpleInterest=principal+ (principal*rate*year/100);
    // pow(a,b) returns the value of x to the power of y
    // Compound interest: Principal * (1 + interest rate / 100) ^ years
    compoundAmount=principal*pow(1+rate/100,year);


    // CIRCLE CALCULATIONS
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    circumference=2*3.14*radius;


    // TRIANGLE SIDE CALCULATIONS
    printf("Enter the first side of the triangle: ");
    scanf("%f",&sideA);

    printf("Enter the second side of the triangle: ");
    scanf("%f",&sideB);

    // sqrt() returns the square root of x
    hypotenuse=sqrt(sideA*sideA+sideB*sideB);


    // INTEGERS CALCULATIONS
    printf("Enter the first integer: ");
    scanf("%d",&number1);

    printf("Enter the second integer: ");
    scanf("%d",&number2);

    integerDivision=number1/number2;
    // typecasting converts number1 to double otherwise integer division would discard the decimal part
    decimalDivision= (double)number1/number2;


    // QUICK OPERATORS
    year++; // year = year + 1; 
    principal+=500; // principal = principal + 500;
    radius*=2; // radius = radius * 2;

    
    printf("\nRESULTS\n");
    printf("Entered initial letter: ");
    putchar(initial);
    printf("\n");

    printf("Simple interest result: %.2lf\n", simpleInterest);
    printf("Compound interest result: %.2lf\n", compoundAmount);
    
    printf("Circle's area: %.2f\n", area);
    printf("Circle's circumference: %.2f\n", circumference);
    
    printf("Hypotenuse: %.2f\n", hypotenuse);
    
    printf("Integer division result: %d\n", integerDivision);
    printf("Decimal division result: %.2lf\n", decimalDivision);


    printf("\nMEMORY SIZES\n");
    printf("char memory size: %zu byte\n", sizeof(initial));
    printf("int memory size: %zu byte\n", sizeof(year));
    printf("float memory size: %zu byte\n", sizeof(radius));
    printf("double memory size: %zu byte\n", sizeof(principal));


    printf("\nUPDATED VALUES\n");
    printf("After year++: %d\n", year);
    printf("After principal+=500: %.2lf\n", principal);
    printf("After radius*=2: %.2f\n", radius);


    printf("\nCOMPARISONS\n");
    printf("Is the principal greater than 10000? %d\n",principal>10000);
    // && means logical AND || means logical OR
    printf("Is the interest rate greater than 0 and years greater than 1? %d\n",rate>0&&year>1);
    // != means not equal
    printf("Is the first number not equal to the second number? %d\n",number1!=number2);

    return 0;
}