# include<stdio.h>
#include<math.h>
// NAME : TAMOGHNA PAL .
int old_code() {
    int number = 25;
    char star ='*';
     int a = 2;
     int A = 3;
     int age = 22;
     age = 29;
     int final_number = 28;
     

/*
this is a multi line comment
i am tamoghna pal
will pursue btech cse core
 maths so data science and ai and ml
i will be an ai ml engineer knowledged with data science
*/
printf("i want to be an aiml engineer , love maths          \n");
printf("i want to be an aiml engineer , love maths              \n");
printf("i want to be an aiml engineer , love maths         \n");
age = 95;
scanf("your predicted age is %d",&age);
printf("age is %d \n ", age );






    return 0;
}




//STARTING A NEW PROGRAM ;

#include <stdio.h>

int second_old_code() {
    int a,b;
    printf("enter a ");
    scanf("%d",&a);

    printf("enter b ");
    scanf("%d",&b);
   int sum=a+b;
    printf("sum is :%d", sum );
    return 0;
}

// writing a program to calculate area of a square
#include <stdio.h>
int third_old_code(){
int side;
printf("enter side");
scanf("%d",&side);
int area = side*side;
printf("area is %d \n", area);


int a,b,c;
a=b=c=23;
printf("a=%d,b=%d,c=%d \n",a,b,c);

int d,e;
d=3,e=5 ;
int f=d+e;
#include<math.h>

int x,y;
x=2;
y=6;
int power = pow(x,y);
printf("%d \n", power );


int modular = y%x;
printf("%d",modular);

return 0;
}

#include<stdio.h> 
#include<math.h>
int like(){

double operation = 5*(3.0/2.0)*3;
printf("%.30lf \n ",operation);









return 0 ;
}





// solving mutiple c programming based maths questions :-
#include<stdio.h>
#include<math.h>
int area_programme_of_square(){
float side;
printf("enter your value of side;");
scanf("%f",&side);

float area;
area=side*side;
printf("the area of square is ;%.2f\n",area);


return 0;
}
//program to calculate area and circumference of a circle
#include<stdio.h>
#include<math.h>
int area_of_circle(){

float radius,area,circumference;
const float pi=3.14;

printf("enter your value of radius;");
scanf("%f",&radius);

area=pi*radius*radius;
circumference=2*pi*radius;

printf("the value of area is:%.2f\n",area);
printf("the value of circumference is:%.2f\n",circumference);
 return 0;   
}

//programme for celsius and farenhite
#include<stdio.h>
#include<math.h>
int programme_for_tempratures(){

    float celsius , farenhite;
    printf("enter value of celsius");
    scanf("%f",&celsius);

    farenhite=((9.0/5.0)*celsius)+32;
 
    printf("%.2f celsius is equal to %.2f farenhite \n",celsius,farenhite);
    
return 0;
}

// Whenever a formula contains a raw fraction like9/5 use decimal9.0/5.0 to force compiler to do float divison and prevent turncation(droping down the decimals not rounding).
//In the Fahrenheit to Celsius program, forgetting the parentheses around (fahrenheit - 32) is the number one reason students lose marks on midterm exams.



//programme for kilometers and mile conversion
#include<stdio.h>
#include<math.h>
int oldest_code (){
    float kilometers , miles;
    const float conversion_factor=0.621;
printf("enter your value of kilometers:");
scanf("%f",&kilometers);


miles=kilometers*conversion_factor;

printf("%.2f kilometers is equal to %.2f miles \n",kilometers,miles);

return 0;
}

// programme for SIMPLE INTREST

/*                  NOTES
1) in simple intrest , the intrest grows leniarly .
2) we need three inputs from the user eclusively i.e -p,r,t so use scanf three times
*/
#include<stdio.h>
#include<math.h>
int SIMPLE_INTREST(){

float principal , rate , time ;
printf("enter the value of principal:");
scanf("%f",&principal);

printf("enter your value of rate:");
scanf("%f",&rate);

printf("enter your value of time:");
scanf("%f",&time);
printf("\n");
float simple_intrest;
simple_intrest= (principal*rate*time)/100.0;
float gross_amount;
gross_amount=simple_intrest+principal;

printf("----------INVESTMENT DETAILS---------\n");
printf("intrest earned:%.5f\n",simple_intrest);
printf("total amount after%.2f years is %.5f\n",time,gross_amount);
printf("thank you so much for your time\n");
    return 0;
}


// this programme is for compound intrest 


int main(){
 float principal, rate,time;

 printf("enter your principal amount:");
 scanf("%f",&principal);

printf("enter your rate:");
scanf("%f",&rate);

printf("enter your time:");
scanf("%f",&time);

float amount;
//core formula
amount=principal*pow((1+rate/100.0),time);

float compound_intrest;
compound_intrest=amount-principal;

printf("\n----COMPOUND INVESTMENT DETAILS----\n");
printf("Total Accumulated balance(A)=%.4f\n",amount);
printf("Pure compound intrest(CI)=%.4f\n",compound_intrest);

return 0;
}
