#include<iostream>

using namespace std;



int power(int a, int n){

    if(n == 0)return 1;

    return a * power(a, n-1);

}



int main(void){

    int y = 1;

    while(y){
    system("CLS");
    int n;

    cout<<"\n\n\n\n";

    cout<<"\t\t\t\tChoose any of the operations among the following operations\n";
    cout<<"\t\t\t\t1.Addition\n";
    cout<<"\t\t\t\t2.Subtraction\n";
    cout<<"\t\t\t\t3.Multiplication\n";
    cout<<"\t\t\t\t4.Division\n";
    cout<<"\t\t\t\t5.Modulo\n";
    cout<<"\t\t\t\t6.Power\n";

    cout<<"\t\t\t\t";
    cin>>n;

    system("CLS");
    cout<<"\n\n\n\n";
    switch(n){

    case 1:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the numbers whose addition is to be performed\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe addition of "<<a<<" and "<<b<<" = "<<a+b<<endl;
            break;
        }
    case 2:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the numbers whose subtraction is to be performed\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe subtraction of "<<a<<" and "<<b<<" = "<<a-b<<endl;
            break;
        }

    case 3:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the numbers whose multiplication is to be performed\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe multiplication of "<<a<<" and "<<b<<" = "<<a*b<<endl;
            break;
        }

    case 4:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the numbers whose division is to be performed\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe division of "<<a<<" by "<<b<<" = "<<a/b<<endl;
            break;
        }

    case 5:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the numbers whose modulo operation is to be performed\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe remainder when "<<a<<" is divided by "<<b<<" = "<<a/b<<endl;
            break;
        }

    case 6:
        {
            int a, b;
            cout<<"\t\t\t\tEnter the number and number it is to be raised by\n";
            cout<<"\t\t\t\t";
            cin>>a;
            cout<<"\t\t\t\t";
            cin>>b;

            cout<<"\t\t\t\tThe value of "<<a<<" raised to power of "<<b<<" = "<<power(a, b)<<endl;
            break;
        }

    default:
        {
            cout<<"\t\t\t\tPlease select correct option\n";
            break;
        }



    }
    cout<<"\n\n";
    cout<<"\t\t\t\tDo you want to run calculator again(0|1)\n";
    cout<<"\t\t\t\t";
    cin>>y;

    }


}
