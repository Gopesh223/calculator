#include<iostream>
using namespace std;
void newf()
    {
        int swi=0,fact=1,count=1,fact2=1,count2=0;
        long double deg=0.0,sin=0.0,cos=1.0,nvar,pow=1.0,nvar2,pow2=1.0,duplicate=0.0;
        cout<<"Enter 1 for sine"<<endl;
        cout<<"Enter 2 for cosine"<<endl;
        cout<<"Enter 3 for tangent"<<endl;
        cout<<"Enter 4 for cosecant"<<endl;
        cout<<"Enter 5 for secant"<<endl;
        cout<<"Enter 6 for cotangent"<<endl;
        cin>>swi;
        cout<<"Enter the angle in degrees.Please make sure the value if from -90 degrees to 90 degrees"<<endl;
        cin>>deg;
        duplicate=deg;
        deg=3.14*(deg/180.0);
        //For cosine
        for(int i=2;i<=28;i+=2)
        {
            if(duplicate!=90)
            {
            if(count2%2==1)
            {
                for(int j=1;j<=i;j++)
                {
                    pow2*=deg;
                    fact2*=j;
                }
                nvar2=pow2/fact2;
                cos+=nvar2;
                fact2=1;
                pow2=1;
            }
            if(count2%2==0)
            {
                for(int j=1;j<=i;j++)
                {
                    pow2*=deg;
                    fact2*=j;
                }
                cos-=(pow2/fact2);
                fact2=1;
                pow2=1;
            }
            count2++;
            }
            else
            cos=0;
        }
        //For sine
        for(int i=1;i<=33;i+=2)
        {
            if(duplicate!=90)
            {
            if(count%2==1)
            {
                for(int j=1;j<=i;j++)
                {
                    pow*=deg;
                    fact*=j;
                }
                nvar=pow/fact;
                sin+=nvar;
                fact=1;
                pow=1;
            }
            if(count%2==0)
            {
                for(int j=1;j<=i;j++)
                {
                    pow*=deg;
                    fact*=j;
                }
                sin-=(pow/fact);
                fact=1;
                pow=1;
            }
            count++;
            }
            else 
            sin=1;
        }
        switch(swi)
        {
            case 1:
            cout<<"The value is "<<sin<<endl;
            break;
            case 2:
            cout<<"The value is "<<cos<<endl;
            break;
            case 3:
            if(duplicate==90)
            cout<<"Value doesn't exist";
            else
            cout<<"The value is "<<(sin/cos)<<endl;
            break;
            case 4:
            if(duplicate==0)
            cout<<"Value doesn't exist";
            else
            cout<<"The value is "<<(1/sin)<<endl;
            break;
            case 5:
            if(duplicate==90)
            cout<<"Value doesn't exist";
            else
            cout<<"The value is "<<(1/cos)<<endl;
            break;
            case 6:
            if(duplicate==0)
            cout<<"Value doesn't exist";
            else
            cout<<"The value is "<<(cos/sin)<<endl;
            break;
        }
    }
void logf()
{
    double s,t,t2,a,i;
    cout<<"Enter the number"<<endl;
    cin>>a;
    if(a>0)
    {
    s=0;
        t=(a-1)/(a+1);
        t2=t*t;
        for(i=0;i<=10000;i++)
        {
            s=s+(1/((2*i)+1))*t;
            t=t2*t;
        }
        cout<<"Logarithm of "<<a<<" to the base 10 is "<<(2*s)/2.30259;
    }
    else 
    cout<<"Logarithm does not exist";
}
int main()
{
    int sw=0;
    cout<<"For addition, press 1"<<endl;
    cout<<"For subtraction, press 2"<<endl;
    cout<<"For multiplication, press 3"<<endl;
    cout<<"For division, press 4"<<endl;
    cout<<"For logarithmic functions, press 5"<<endl;
    cout<<"For trigonometric functions, press 6"<<endl;
    cout<<"For solving quadratic equations, press 7"<<endl;
    cout<<"For solving linear equations(in two variables), press 8"<<endl;
    cin>>sw;
    switch(sw)
    {
        case 1:
        double add1, add2;
        cout<<"Enter the two numbers to be added"<<endl;
        cin>>add1;
        cin>>add2;
        cout<<"The sum of the entered numbers is "<<(add1+add2)<<endl;
        break;
        case 2:
        double sub1, sub2;
        cout<<"Enter the number you want to subtract from"<<endl;
        cin>>sub1;
        cout<<"Enter the number you want to subtract from the first number"<<endl;
        cin>>sub2;
        cout<<"The difference of the two numbers is "<<(sub1-sub2)<<endl;
        break;
        case 3:
        double m1, m2;
        cout<<"Enter the two numbers to be multiplied"<<endl;
        cin>>m1;
        cin>>m2;
        cout<<"The product of the two numbers are "<<(m1*m2)<<endl;
        break;
        case 4:
        double div1,div2;
        cout<<"Enter the divisor"<<endl;
        cin>>div1;
        cout<<"Enter the dividend"<<endl;
        cin>>div2;
        cout<<"The quotient is "<<(div2/div1)<<endl;
        break;
        default:
        cout<<"No valid input, try again"<<endl;
        break;
        case 5:
        logf();
        break;
        case 6:
        newf();
        break;
        case 7:
        double aa,bb,cc,r1,r2,disc,i;
        cout<<"The general form of a quadratic equation is ax^2+bx+c=0"<<endl;
        cout<<"Enter a"<<endl;
        cin>>aa;
        cout<<"Enter b"<<endl;
        cin>>bb;
        cout<<"Enter c"<<endl;
        cin>>cc;
        disc=(bb*bb)-(4*aa*cc);
        if(disc<0)
        cout<<"No real roots";
        else 
        for(i=0.0;i<=disc;i=i+0.001)
        {
            if((disc-(i*i)<=0.001&&disc-(i*i)>=0))
            break;        
        }
        r1=(-bb+i)/(2*aa);
        r2=(-bb-i)/(2*aa);
        cout<<"The roots of the equation are "<<r1<<" and "<<r2<<endl;
        break;
        case 8:
        double a,b,c,m,n,p,x,y;
        cout<<"Express the 1st equation in the form of ax+by+c=0"<<endl;
        cout<<"Enter a"<<endl;
        cin>>a;
        cout<<"Enter b"<<endl;
        cin>>b;
        cout<<"Enter c"<<endl;
        cin>>c;
        cout<<"Express the 2nd equation in the form of mx+ny+p=0"<<endl;
        cout<<"Enter m"<<endl;
        cin>>m;
        cout<<"Enter n"<<endl;
        cin>>n;
        cout<<"Enter p"<<endl;
        cin>>p;
        if(b*m==n*a)
        cout<<"Please enter two different equations(or one of the equation has all coefficients as zero). Try again"<<endl;
        else
        {
            x=((n*c)-(b*p))/((b*m)-(n*a));
            y=(-c-(a*x))/b;
        
        cout<<"The value of x and y are "<<x<<" and "<<y<<endl;
        }
        break;
    }
}