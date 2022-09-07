#include <iostream>
using namespace std;

class Admin {
    protected:
    	
    int total_annual_revenue , manager_salary , total_staff , employee_salary ;
    string can_terminate , company_name;
};

class Manager:public Admin{
    public:

    void Access(){
        cout << "Enter The company_name : ";
        cin >> company_name;

        cout << "Enter The Manager salary : ";
        cin >> manager_salary;

        cout << "Enter The total staff : ";
        cin >> total_staff;

        cout << "Enter The total_annual_revenue : ";
        cin >> total_annual_revenue;

        cout << "Enter The Employee can_terminate : ";
        cin >> can_terminate;   
    }
    void display(){

        cout << "Enter The company_name : " <<  company_name << endl;
        cout << "Enter The Manager salary : " <<  manager_salary << endl;
        cout << "Enter The total staff : " <<  total_staff << endl;
        cout << "Enter The total_annual_revenue : " <<  total_annual_revenue << endl;
        cout << "Enter The Employee can_terminate : " <<  can_terminate << endl;
    }

};
class emp: public Manager {

    public:
    void Access(){

        cout << "Enter The Employee salary : ";
        cin >> employee_salary;
        }
        
    void display(){
        cout << "Enter The Employee salary : " << employee_salary<<endl;
    }
};

int main(){
    emp i;

    cout<<"-: Enter The Manager info :-  "<<endl<<endl;
    i.Manager::Access();
    
    cout<<"-: Enter The Employee info :- "<<endl<<endl;
    i.Access();

    cout<<"-: Manager info :- "<<endl<<endl;
    i.Manager::display();

    cout<<"-: Employee info :- "<<endl<<endl;
    i.display();

}
