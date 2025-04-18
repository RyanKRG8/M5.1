#include "TeamLeader.h"
#include "ShiftSupervisor.h"
#include "ProductionWorker.h"

int main() {
    ProductionWorker worker1("Alice Johnson", "A123", "01/05/2021", 1, 25.50);
    ProductionWorker worker2("Bob Smith", "B456", "03/22/2022", 2, 23.75);

    cout << "Production Worker 1:\n";
    worker1.printProductionWorker();
    cout << endl;

    cout << "Production Worker 2:\n";
    worker2.printProductionWorker();
    cout << endl;

    ShiftSupervisor supervisor("Carol Lee", "S789", "07/15/2020", 60000.00, 5000.00);
    cout << "Shift Supervisor:\n";
    supervisor.printShiftSupervisor();
    cout << endl;

    TeamLeader leader("David Park", "T321", "10/10/2019", 1, 28.75, 1000.00, 40, 38);
    cout << "Team Leader:\n";
    leader.printTeamLeader();
    cout << endl;

    return 0;
}
