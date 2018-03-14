#include <iostream>

class A{
    private:
        int num;
    public:
        A(): num(6) {}
        friend int addNum(A);
};

int addFive(A numA){
    return numA.num+5;
}

using namespace std;
int main(){
    A myA;
    myA.num = 7;
    cout<<"A: " << addFive(myA) << endl;
    return 0;
}