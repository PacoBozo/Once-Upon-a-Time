/**
 * 
 * Solution to homework assignment 1
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2022/2023
 * 
 * @author Ali Nader
 * @idnumber 5MI0600080
 * @task 1
 * 
 */

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    
if (num>=1 && num<=1000000)
    {
    int digit;
    int numSquared = 0;
    int multiple = 1;
    
    while (num>0)
    {
        digit = num % 10;
        numSquared= numSquared + digit*digit*multiple;
        
        if (digit>3)
        {
            multiple*=100;
        }
        else
        {
            multiple*=10;
        }
        
        num = num/10;
    }
    
    int numOpposite = 0;
    while (numSquared>0)
    { 
        digit = numSquared % 10;
        
        numOpposite = numOpposite*10 + digit;
        
        numSquared /= 10;
    }
    
    cout << numOpposite + 1 << endl;
    
    }
    
    
    else 
    {
        cout << "Incorrect input" << endl;
    }
}