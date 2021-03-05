#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int TOD(long long int ,long long int ,long long int ,long long int);
int BILL(int , int);

int main()
{
    int consumer_number, contract_demand, billed_demand, units_consumed,bill_amount;
    cout<<"\n Enter Your consumer number:";
    cin>>consumer_number;
    cout<<"\n Enter Contract Demand:";
    cin>>contract_demand;
    cout<<"\n Enter the Billed Demand and Units Consumed:";
    cin>>billed_demand>>units_consumed;
    bill_amount=BILL(billed_demand,units_consumed);
    cout<<"\n \n Consumer Number:"<<consumer_number;
    cout<<"\n Contract Demand:"<<contract_demand;
    cout<<"\n \n Total Bill Amount to be paid:"<<bill_amount;
    return 0;
}
int BILL(int billed_demand, int units_consumed)
{
    long long int a,b,c,d;
    double demand_charges, wheeling_charges, energy_charges, f, fac, ed,tax,total,tod_tarif;
    demand_charges=billed_demand*411;
    energy_charges=units_consumed*11.47;
    wheeling_charges=units_consumed*0.57;
    cout<<"\n Enter all tariff units consumption:";
    cin>>a>>b>>c>>d;
    tod_tarif=TOD(a,b,c,d);
    cout<<"\n Enter FAC charges:";
    cin>>f;
    fac=(f*units_consumed)/100;
    ed=(demand_charges+energy_charges+wheeling_charges+tod_tarif+fac)*0.21;
    tax=(19.04*units_consumed)/100;
    total=demand_charges+energy_charges+wheeling_charges+tod_tarif+fac+ed+tax;
    cout<<"\n Demand Charges:"<<demand_charges;
    cout<<"\n Energy Charges:"<<energy_charges;
    cout<<"\n Wheeling Charges:"<<wheeling_charges;
    cout<<"\n TOD tarif:"<<tod_tarif;
    cout<<"\n FAC:"<<fac;
    cout<<"\n Electrical Duty Charges:"<<ed;
    cout<<"\n Tax on Sale:"<<tax;
    return total;
    
}
int TOD(long long int a,long long int b,long long int c,long long int d)
{
    double tod_total;
    tod_total=((a*(-1.5))+(b*0)+(c*0.8)+(d*1.1));
    return tod_total;
}
