// 1. Add two numbers
#include <stdio.h>

int main() 
{
    int n1, n2, sum;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("The sum of %d and %d is: %d\n", n1, n2, sum);

    return 0;
}



// 2. Subtraction of two numbers
#include <stdio.h>

int main() 
{
    int n1, n2, result;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    result = n1 - n2;

    printf("The subtraction of %d and %d is: %d\n", n1, n2, result);

    return 0;
}



// 3. Multiplication of two numbers
#include <stdio.h>

int main() 
{
    int n1, n2, product;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    product = n1 * n2;

    printf("The multiplication of %d and %d is: %d\n", n1, n2, product);

    return 0;
}



// 4. Division of two numbers
#include <stdio.h>

int main() 
{
    float n1, n2, result;
    
    printf("Enter dividend: ");
    scanf("%f", &n1);
    printf("Enter divisor: ");
    scanf("%f", &n2);

    if (n2 == 0) 
    {
        printf("Error! Division by zero is not allowed.\n");
    } 
    else 
    {
        result = n1/n2;
        printf("The division of %f by %f is: %.2f\n", n1, n2, result);
    }

    return 0;
}



// 5. Addition, subtraction, Multiplication, Division
#include <stdio.h>

int main()
{
    int n1, n2;
    int sum, diff, p;
    float q;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ")
    scanf("%d", &n2);

    sum = n1+n2;
    diff = n1-n2;
    p = n1*n2;

    printf("Addition: %d + %d = %d\n", n1, n2, sum);
    printf("Subtraction: %d - %d = %d\n", n1, n2, diff);
    printf("Multiplication: %d * %d = %d\n", n1, n2, p);

    if (n2 == 0) 
    {
        printf("Error! Division by zero is not allowed.\n");
    } 
    else 
    {
        q = n1/n2;
        printf("The division of %d by %d is: %.2f\n", n1, n2, q);
    }

}



// 6. Convert hours into minutes
#include <stdio.h>

int main()
{ 
    int hours, min;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    min = hours*60;
    printf("%d hour(s) = %d minutes\n", hours, min);

    return 0;
}



// 7. Convert minutes into hours
#include <stdio.h>

int main()
{
    int hours, min, min2;

    printf("Enter the time in minutes: ");
    scanf("%d", &min);

    hours = min/60;
    min2 = hours%60;

    printf("%d minutes = %d hour(s) and %d minute(s)\n", min, hours, min2);
    return 0 ;
}



// 8. Convert dollars into Rs. Where 1 $ = 48 Rs
#include <stdio.h>

int main()
{
    float doll, rs;

    printf("Enter the value in dollars: ");
    scanf("%f", &doll);

    rs = doll*48;
    printf("%.2f Dollar(s) = %.2f Rupees\n", doll, rs);
    return 0 ;
}



// 9. Convert Rs. into dollars where 1 $ = 48 Rs
#include <stdio.h>

int main()
{
    float doll, rs;

    printf("Enter the value in rupees: ");
    scanf("%f", &rs);
    
    doll = rs/48;
    printf("%.2f Rupees = %.2f Dollar(s)\n", rs, doll);
    return 0 ;

}



// 10. Convert dollars into pound where 1 $ = 48 Rs. And 1 pound = 70 Rs
#include <stdio.h>

int main()
{
    float doll, rs, pd;

    printf("Enter the valur in Dollars: ");
    scanf("%f", &doll);

    rs = doll*48;
    pd = rs/70;
    printf("%.2f Dollar(s) = %.2f Pounds\n", doll, pd);
    return 0;
}



// 11. Convert grams into kg
#include <stdio.h>

int main()
{
    float g, kg;

    printf("Enter the value in gram: ");
    scanf("%f", &g);

    kg = g/1000;
    printf("%.2f Gram(s) = %.2f Kilogram(s)\n", g, kg);
    return 0;
}



// 12. Convert kgs into grams
#include <stdio.h>

int main()
{
    float g, kg;

    printf("Enter the value in Kilogram: ");
    scanf("%f", &kg);

    g = kg*1000;
    printf("%.2f Kilogram(s) = %.2f gram(s)\n", kg, g);
    return 0;
}



// 13. Convert bytes into KB, MB and GB
#include <stdio.h>

int main()
{
    long bytes;
    printf("Enter bytes: ");
    scanf("%ld",&bytes);
    
    printf("KB = %.2f\n", bytes/1024.0);
    printf("MB = %.2f\n", bytes/(1024.0*1024));
    printf("GB = %.2f\n", bytes/(1024.0*1024*1024));
    return 0;
}



// 14. Convert celcius into Fahrenheit. F = (9/5 * C) + 32
#include <stdio.h>

int main()
{
    float c;
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &c);
    
    printf("%.3f Celciuc = %.3f Fahrenheit\n", c, (9.0/5)*c + 32);
    return 0;
}



// 15. Convert Fahrenheit into celcius. C = 5/9 * (F – 32)
#include <stdio.h>

int main()
{
    float fh;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fh);
   
    printf("%.3f Fahrenheit = %.3f Celcius\n", fh, (5.0/9)*(fh-32));
    return 0;
}



// 16. Calculate interest where I = PRN/100.
#include <stdio.h>

int main()
{
    float P,R,N,I;
    printf("Enter Principal: ");
    scanf("%f",&P);
    printf("Enter Rate: ");
    scanf("%f", &R);
    printf("Enter Time: ");
    scanf("%f", &N);
    
    I = (P*R*N)/100;
    
    printf("Interest = %2f\n", I);
    return 0;
}



// 17. Calculate area & perimeter of a square
#include <stdio.h>

int main()
{
    float l;
    printf("Enter the length of square: ");
    scanf("%f", &l);
    
    printf("Area = %.2f\n", l*l);
    printf("Perimeter = %.2f\n", 4*l);
    return 0;
}



// 18. Calculate area & perimeter of a rectangle
#include <stdio.h>

int main()
{
    float l,b;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    printf("Area = %.2f\n", l*b);
    printf("Perimeter = %.2f\n", 2(l+b));
    return 0;
}



// 19. Calculate area of a circle of radius r
#include <stdio.h>

int main()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    printf("Area of rectangle = %2f\n", ((22.0/7.0)*r*r));
    return 0;
}



// 20. Calculate area of a triangle
#include <stdio.h>

int main() 
{
    float b,h;
    printf("Enter base and height: ");
    scanf("%f %f",&b,&h);
    
    printf("Area = %2f\n", 0.5*b*h);
    return 0;
}



// 21. Calculate net salary
#include <stdio.h>

int main() 
{
    float gs, al, de, ns;
    printf("Enter Gross Salary: ");
    scanf("%f", &gs);

    al = 0.10 * gs;
    de = 0.03 * gs;
    ns = gs + al - de;

    printf("\nGross Salary: %.2f\n", gs);
    printf("Allowance (10%%): %.2f\n", al);
    printf("Deduction (3%%): %.2f\n", de);
    printf("Net Salary: %.2f\n", ns);

    return 0;
}



// 22. Calculate net sales
#include <stdio.h>

int main()
{
    float gross, dis, net;

    printf("Enter Gross Sales: ");
    scanf("%f", &gross);

    dis = 0.10 * gross;
    net = gross - dis;

    printf("\nGross Sales: %.2f\n", gross);
    printf("Discount (10%%): %.2f\n", dis);
    printf("Net Sales: %.2f\n", net);
    return 0;
}



// 23. Calculate average of three subjects along with their total
#include <stdio.h>

int main() 
{
    float s1, s2, s3, total, avg;
    printf("Enter marks of Subject 1: ");
    scanf("%f", &s1);
    printf("Enter marks of Subject 2: ");
    scanf("%f", &s2);
    printf("Enter marks of Subject 3: ");
    scanf("%f", &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", avg);

    return 0;
}



// 24. Swap two values
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first value (a): ");
    scanf("%d", &a);
    printf("Enter second value (b): ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping:  a = %d, b = %d\n", a, b);
    return 0;
}