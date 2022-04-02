/*A car service shop needs to keep track of the records of services they provide to their customer. Create a system
for them so they could keep ATLEAST the below records:

• Date the customer visited
• Services performed (at least 2 different services) --> can be 2string or arrays..
• Parts changed (at least 2 different parts)
• Payment (method & amount)  --> cash, card...

you create the options and te client two atleast two of them.
work with dynamic memory and clean it at the end*/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

//using namespace std;

class Records{
    public:   
        std::string date, serv1, serv2, part1, part2, paymethod;

    void date_input();
    void service_option();
    void part_change();
    void payment();
    void get_data();


};

void Records::date_input(){
    std::cout << "Please, enter the day of today (YYYY/MM/DD): ";
    std::getline(std::cin, date);
    std::cout << std::endl;
}

void Records::service_option(){

    std::cout << "Please, enter two service options:"<<std::endl;
    std::cout << "First service:  ";
    std::getline(std::cin,serv1);
    std::cout << "Second service:  ";
    std::getline(std::cin,serv2);
    std::cout << std::endl;
}

void Records::part_change(){

    std::cout << "Please, enter two parts you want to change:"<<std::endl;
    std::cout << "First part:  ";
    std::getline(std::cin,part1);
    std::cout << "Second service:  ";
    std::getline(std::cin,part2);
    std::cout << std::endl;
}

void Records::payment(){
    
    std::cout << "Please, choose a method of payment (Swish, Card or Cash): ";
    std::getline(std::cin, paymethod);
       std::cout << std::endl;
}

void Records::get_data(){
    date_input();
    if(this->date!="")
    {
    service_option();
    part_change();
    payment();
    }
}


int main(){
    int n;  //number of records
    std::cout << "Please, enter number of records: ";
    std::cin >> n;
    std::cin.get();
    
    Records* r = new Records[n];  //new reserve the dinamic memory and a pointer 'r' is ceate to get it. 
 
    for(int i = 0; i < n; i++){
     r[i].get_data();
    }
   
    std::cout << std::endl;
    std::cout << "-------------DATA --------------- " << std::endl;
   
    for(int i = 0; i < n; i++){
        std::cout << r[i].date <<"\n";
        std::cout << "Services: ";
        std::cout << r[i].serv1 <<" & "<< r[i].serv2  <<"\n";
        std::cout << "Parts: ";
        std::cout << r[i].part1 <<" & "<< r[i].part2 <<"\n";
        std::cout << "Pay method: ";
        std::cout << r[i].paymethod <<"\n";
        std::cout << std::endl;
    }


    delete[] r;

    return 0;
}