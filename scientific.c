#include<stdio.h>
#include<stdio_ext.h>
#include<math.h>
#include<stdlib.h>
#define KEY "Enter the calculator operation you want to perform :"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void calculatoroperation();
int factorial();
void absolute();
void logarithm();
void squareroot();
void binary();
void decimal();
void cube();
int main()
{
int X=1;
char ch;
calculatoroperation();

while(X)
{
	 __fpurge(stdin);
	printf("\n %s ",KEY);
	scanf("%c",&ch);
		
	switch(ch)
	{
		case '+':addition();
			// __fpurge(stdin);
			 break;
		case '-':subtraction();
                         break;
		case '*':multiplication();
                         break;
		case '/':division();
                         break;
		case '%':modulus();
                         break;
		case '!':factorial();
                         break;
		case '^':power();
                         break;
		case 'a':
		case 'A':absolute();
			break;
		case 'l':
		case 'L':logarithm();
			break;
		case 'S':
                case 's':squareroot();
                        break;	
		case 'B':
                case 'b':binary();
                        break;	
		case 'D':
                case 'd':decimal();
                        break;
		case 'c':
                case 'C':cube();
                        break;

	


		
		
                
		case 'Q':
		case 'q':exit(0);
			break;
		default:
		printf("\n*******INVALID OPTION ***********\n");
		calculatoroperation();
		break;
	}
}
}



//function definitions
void calculatoroperation()
{
printf("\npress Q or q to quit the program");
printf("\npress H or h to display calculator operations");

printf("\nEnter + symbol for Addition");
printf("\nEnter - symbol for Subtraction");
printf("\nEnter * symbol for Multiplication");
printf("\nEnter / symbol for Division");
printf("\nEnter %% symbol for Modulus");
printf("\nEnter ^ symbol for Power");
printf("\nEnter ! symbol for Factorial");
printf("\n Enter A or a to find Absolute");
printf("\n Enter L or l to find logarithm");
printf("\n Enter b or B to convert DECIMAL to BINARY");
printf("\n Enter s or S to find Squareroot");
printf("\n Enter d or D to convert BINARY to DECIMAL");
printf("\n Enter c or C to find Cuberoot ");

}

void addition()
{
int n,total=0,i=0,num;
printf("\nEnter number of elements to add");
scanf("%d",&n);
printf("\nEnter %d numbers one by one:\n",n);
while(i<n)
{
	scanf("%d",&num);

	total=total+num;
	i=i+1;
}
printf("sum of %d numbers =%d  \n",n,total);

}

void subtraction()
{
int a,b,c=0;
printf("\nEnter first number :");
scanf("%d",&a);
printf("Enter second number :");
scanf("%d",&b);
c=a-b;
printf("\n Subtraction:%d -%d =%d \n",a,b,c);


}

void multiplication()
{
int a,b,mul=0;
printf("\nEnter first number :");
scanf("%d",&a);
printf("Enter second number :");
scanf("%d",&b);
mul=a*b;
printf("\nMultiplication :%d * %d =%d \n",a,b,mul);
}

void division()
{
int a,b,div=0;
printf("\nEnter first number :");
scanf("%d",&a);
printf("Enter second number :");
scanf("%d",&b);
div=a/b;
printf("\nDivision:%d / %d =%d \n",a,b,div);

}

void modulus()
{
int a,b,mod=0;
printf("\nEnter first number :");
scanf("%d",&a);
printf("Enter second number :");
scanf("%d",&b);
mod=a%b;
printf("\nModulus of entered numbers =%d \n",mod);
}

void power()
{
double a,num,p;
printf("\nEnter two numbers to find power\n");
printf("number :");
scanf("%lf",&a);
printf("power :");
scanf("%lf",&num);

p=pow(a,num);

printf("\n %lf to the power %lf= %lf\n",a,num,p);

}

int factorial()
{
int i,fact=1,num;
printf("\nEnter a number to find factorial :");
scanf("%d",&num);
if (num<0)
{
	printf("\nPlease enter a positive number");

	return 1;
}

for(i=1;i<=num;i++)
fact=fact*i;
printf("\nFactorial of %d = %d\n",num,fact);
return 0;
}

void absolute()
{
int a,b;
printf("\nEnter the number to find absolute\n");
scanf("%d",&a);
b=abs(a);
printf("The absolute of %d is = %d",a,b);

}

void logarithm()
{
float num;
float i;
printf("\nEnter a number to find logarithm of a number");
scanf("%f",&num);
i=log(num);
printf("\n The Natural logarithmic value of %f is %f\n",num,i);

}

void squareroot()
{
int num;
float r;
printf("\nEnter a number to find squareroot");
scanf("%d",&num);
r=sqrt(num);
printf("\nThe squareroot of %d is = %f",num,r);

}

void binary()
{
int num,res,c;
printf("\n Enter a decimal number to convert into binary number");
scanf("%d",&num);
printf("\n The binary number of decimal number %d is =",num);
for(c=31;c>=0;c--)
{
res=num>>c;
if(res&1)
printf("1");
else
printf("0");


}
printf("\n");

}

void decimal()
{
int dec=0,i=0,rem;
long long n,temp;
printf("\nEnter a Binary number to convert into Decimal number");
scanf("%lld",&n);
temp=n;
while(n!=0)
{
rem=n%10;
n/=10;
dec+=rem*pow(2,i);
i++;
}
printf("The Decimal number equivalent of Binary number %lld is =%d",temp,dec);
}

void cube()
{
double num,cube;
printf("\nEnter a number to find cuberoot");
scanf("%lf",&num);
cube=cbrt(num);

printf("\nThe cuberoot of %lf = %lf",num,cube);

}
