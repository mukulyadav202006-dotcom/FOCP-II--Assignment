#include<iostream>
using namespace std;
int main(){
    int employees, basic_salary;
    cout<<"Enter number of employees: ";
    cin>>employees;
    cout<<"Enter the basic salary of each employee: ";
    cin>>basic_salary;
    float net_salary;
    net_salary = basic_salary + (0.12*basic_salary);
    cout<<"Net salary of each employee after 12% bonus is: "<<net_salary;
    return 0;
}