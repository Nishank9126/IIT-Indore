#include<iostream>
using namespace std;
int main(){

int operation;
double num_1,num_2;
       cout<<"enter the operation you want to perform"<<endl;
       cout<<"1)addition,2)subtraction,3)multiplication,4)division,5)trignometric fuctions,6)modulo function,7)square root fuction"<<endl;
       cout<<"8)roots of quadratic eqation,9)logarithemic fuction"<<endl;
       cin>>operation;
       
    if (operation==1){
       cout<<"enter the first number"<<endl;
       cin>>num_1;
       cout<<"enter the second number"<<endl;
       cin>>num_2;
    double sum=num_1+num_2;
       cout<<"sum is "<<sum<<endl;   
    }
    else if (operation==2){
       cout<<"enter the first number"<<endl;
       cin>>num_1;
       cout<<"enter the second number"<<endl;
       cin>>num_2;
    double sub=num_1-num_2; 
       cout<<"subtraction is "<<sub<<endl;
    } 
    else if(operation==3){
       cout<<"enter the first number"<<endl;
       cin>>num_1;
       cout<<"enter the second number"<<endl;
       cin>>num_2;
    double M=num_1*num_2;
       cout<<"multiplication is "<<M<<endl; 
    }
   else if (operation==4)
   {
      cout<<"enter the first number"<<endl;
       cin>>num_1;
       cout<<"enter the second number"<<endl;
       cin>>num_2;
      double D=num_1/num_2;
      cout<<"division is "<<D<<endl;
   } 
   else if (operation==5){
   int operation;   
      cout<<"enter the function you want to perform"<<endl;
      cout<<"1)sin,2)cos,3)tan"<<endl;
      cin>>operation;
   if (operation==1){
   double a;   
      cout<<"enter tne angle in radians in multiple of pi"<<endl;
      cin>>a;
   double x=3.141592*a;
   double S=(x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880);
      cout<<"the value of sin is "<<S<<endl;      
   } 
   else if (operation==2){
   double a;   
      cout<<"enter tne angle in radians in multiple of pi"<<endl;
      cin>>a;
   double x=3.141592*a;
   double S=(1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320);
      cout<<"the value of cos is "<<S<<endl;      
   } 
   else if (operation==3){
   double a;   
      cout<<"enter tne angle in radians in multiple of pi"<<endl;
      cin>>a;
   if (a!=0.5,1.5){
      double x=3.141592*a;
      double S=(x-(x*x*x)/6+(x*x*x*x*x)/120-(x*x*x*x*x*x*x)/5040+(x*x*x*x*x*x*x*x*x)/362880);
      double M=(1-(x*x)/2+(x*x*x*x)/24-(x*x*x*x*x*x)/720+(x*x*x*x*x*x*x*x)/40320);
      double T=S/M;
      cout<<"the value of tan is "<<T<<endl; 
   
   } 
   else if (a=0.25){
      cout<<"1"<<endl;
   }  
   else {
        cout<<"infinity"<<endl;
   }
   } 
   
   else{
      cout<<"enter a valid number"<<endl;
   }
   } 
   else if (operation==6){
   int a,b;
      cout<<"Mod(a,b)"<<endl;
      cout<<"enter the value of a,"<<endl;
      cin>>a;
      cout<<"enter the value of b"<<endl;
      cin>>b;
   int k=a%b;
      cout<<"the mod of the entered numbers is  "<<k<<endl;
   }
   else if (operation==7){
   int n;   
      cout<<"enter the value of n"<<endl;
      cin>>n;
   if (n>0){
   double x;
   x=0.00001;
   for (double i = 0.00002; i*i<n ; i+=0.00001){
      x=x+0.00001;
   }
   cout<<"the answer is "<<x<<endl;
   }
   else if (n<0){
   while(n<0){
      cout<<"square root of negative number is not defined"<<endl;
      cout<<"please enter a positive integer"<<endl;
      cin>>n;
   }   
   }
   else if (n==0){
      cout<<"the answer is zero"<<endl;
   }
   }
   else if (operation==8){
   double a,b,c;  
      cout<<"the general form of quadratic eqation is ax^2+bx+c"<<endl;
      cout<<"enter the value of a"<<endl;
      cin>>a;
      cout<<"enter the value of b"<<endl;
      cin>>b;
      cout<<"enter the value of c"<<endl;
      cin>>c;
   if (a!=0){
      double d=b*b-4*a*c;
      if (d>0){
         double x=0.00001;
      for (double i = 0.00002; i*i<d; i+=0.00001){
         x=x+0.00001;
      }
        double root1=-(b+x)/(2*a);
        double root2=(-b+x)/(2*a);
      cout<<"the roots are real and distinct and are equal to "<<root1<<" "<<root2<<endl; 
      }
   else if (d<0){
      cout<<"There are no real roots for the given values"<<endl;       
   } 
   else {
      double k=-(b)/(2*a);
      cout<<"the roots are equal and eqal to "<<k<<endl;
   }  
   } 
   else {
      double k=-(c/b);
      cout<<"the eqation then is linear eqation which only has one root which is "<<k<<endl;
   }  
   }
   else if (operation==9){
      cout<<"Assuming the general form to be y=lnx "<<endl;
      cout<<"Enter the value of x ";
   double x;
      cin>>x;
   double r;
   if(x>=1){
      for(r=0.0001; ;r+=0.0001){
      long int c=1;
      double b=1;
      double a=0;
      for(int i=1;i<=10;i++){
         c=c*i;
         b=b*r;
         a=a+(b/c);}
      if(a>=(x-1)){
         break;
      }
            
      }   
               
         cout<<"The value is "<<r-0.0001<<endl;}
      else if(x<1 && x>0 ){
         double r;
      for(r=0.5; ;r-=0.0001){
         long int c=1;
         double b=1;
         double a=0;
      for (int i = 1; i <=10; i++) {
         c=c*i;
         b=b*r;
         a=a+(b/c);}
      if(a>=(x-1)){
         break;
      }
      }
         cout<<"The value of logarithm is "<<r<<endl;
      }
      else if(x<=0){
         cout<<"The input is not valid for the logarithm calculation"<<endl;
         cout<<"Please enter a valid number"<<endl;
      }
            
      }
     
   else{
      cout<<"enter a valid number"<<endl;
   }
   
        return 0;
    }





