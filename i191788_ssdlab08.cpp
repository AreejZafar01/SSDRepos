#include <iostream>

using namespace std;

class Plan {


    double rate;

    void getRate()
    {
        double r = 3.0;
        rate = r;
    }

    void calculateBill(int units)
    {
    }

};

class Domesticplan {
    double rate;
public:

    void getRate() {
        rate = 4.0;

    }
    void calculateBill(int units)
    {

        double bill = rate * units;

        cout << " Domestic Plan Bill :  " << bill<<endl;
    }
};

class InstitutionalPlan {
    double rate;
public:
    void getRate() {
        rate = 2.0;
    }
    void calculateBill(int units)
    {
        double bill=rate *units;

        cout << "Institutional Plan Bill: PKR " << bill<<endl;
    }
};

class CommercialPlan {

    double rate;

public:

    void getRate()
    {
        rate = 2.5;
    }
    void calculateBill(int units) {

        double bill = (double)rate * units;

        cout << "Commercial Plan Bill: PKR " << bill<<endl;
    }
};


class GetPlanFact {
    Domesticplan p3;
    InstitutionalPlan p1;
    CommercialPlan p2;
public:

    void getPlan() {
        p1.getRate();

        p1.calculateBill(10);

        p2.getRate();

        p2.calculateBill(10);

        p3.getRate();

        p3.calculateBill(10);
       
    }
};

int main() {
    GetPlanFact g;
    g.getPlan();
        return 0;
}                