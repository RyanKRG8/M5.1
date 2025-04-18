#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualProductionBonus;

public:
    ShiftSupervisor()
        : Employee(), annualSalary(0.0), annualProductionBonus(0.0) {
    }

    ShiftSupervisor(string n, string num, string date, double salary, double bonus)
        : Employee(n, num, date), annualSalary(salary), annualProductionBonus(bonus) {
    }

    double getAnnualSalary() const { return annualSalary; }
    double getAnnualProductionBonus() const { return annualProductionBonus; }

    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualProductionBonus(double bonus) { annualProductionBonus = bonus; }

    void printShiftSupervisor() const {
        printEmployee();
        cout << "Annual Salary: $" << annualSalary << endl;
        cout << "Annual Production Bonus: $" << annualProductionBonus << endl;
    }
};

#endif
