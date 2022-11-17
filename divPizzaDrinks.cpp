// The Program will divide pizzas,drinks between N friends and calculate Bill
// 50% bill will be paid by me and other by friends
#include "iostream"
using namespace std;
int div_pizza(int guests){
    int Pizzas = 3 * 8;
    if(guests==0)
        return Pizzas;
    else if(guests<0)
        return -1;
    else {
        int totalFriends = guests + 1;// guests + me

        int PizzaPerPerson = Pizzas / totalFriends;
        return PizzaPerPerson;
    }
}
int div_drink_glasses(int guests){
    int drinks = 3 * 5;
    if(guests==0)
        return drinks;
    else if(guests<0)
        return -1;
    else {
        int totalFriends = guests + 1;// guests + me
        int drinkPerPerson = drinks / totalFriends;
        return drinkPerPerson;
    }
}
// 50% amount Bill is paid by me other by guests
float div_amount(int guests){
    if(guests>=1 && guests<=15) {
        int myBill = (5000 * 50) / 100; // calculate my 50% Bill
        float GuestBill = float(5000 - myBill) / guests; // amount per guest
        return GuestBill;
    }
    return 0;
}
int main() {
    int n;
    cout<<"No of guests: ";
    cin>>n;
    cout<<"Pizzas per friend "<<div_pizza(n)<<endl;
    cout<<"drinks per friend "<<div_drink_glasses(n)<<endl;
    cout<<"Amount per guest friend "<<div_amount(n)<<endl;
}
