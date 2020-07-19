#include <iostream>
using namespace std;

int b2d(int n)
{
int num = n;
   int dec = 0;

    int b = 1;
    int temp = num;

    while(temp){
        int last = temp % 10;
    temp = temp / 10;
    dec += last * b;
        b = b * 2;
    }
return dec;
}

int main() {
int n;
    std::cin >> n;
    std::cout << b2d(n) << std::endl;
}
