#include<iostream>
using namespace std;
int fact(int num){
    if (num<1)
    {
        return 1;

    }
    
    else {
        return num*fact(num -1);

    }




}




int main(){
    int number1;
    cout <<"Enter the number which you want factorial = ";
    cin >> number1;


    int r;
    r = fact(number1);

    cout << "Factorial of the numbet you entered is =" << r << endl;





    return 0;
}