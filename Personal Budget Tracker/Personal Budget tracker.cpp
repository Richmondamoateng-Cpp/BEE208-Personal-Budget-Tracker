#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Variables
    string ownerName, budgetPeriod;
    int numIncome, numExpense;
    double incomeAmount, totalIncome = 0;
    double expenseAmount, totalExpenses = 0;
    string expenseName;
    double remainingBalance;
    string budgetStatus;

    // 2. Display the system title
    cout << "PERSONAL BUDGET TRACKER" << endl << endl;

    // 3. Ask for owner name and budget period
    cout << "Enter budget owner name: ";
    getline(cin, ownerName);
    cout << "Enter budget period: ";
    getline(cin, budgetPeriod);

    // 4. Ask number of income sources
    cout << "Enter number of income sources: ";
    cin >> numIncome;

    // 5. Loop to accept each income amount
    for (int i = 1; i <= numIncome; i++) {
        cout << "Income Source " << i << " Amount: ";
        cin >> incomeAmount;
        
        // 8. Validate negative
        while (incomeAmount < 0) {
            cout << "Amount cannot be negative. Re-enter: ";
            cin >> incomeAmount;
        }
        totalIncome += incomeAmount;
    }

    // 6. Ask number of expense categories
    cout << "\nEnter number of expense categories: ";
    cin >> numExpense;
    cin.ignore(); // to clear buffer for getline

    // 7. Loop to accept each expense
    for (int i = 1; i <= numExpense; i++) {
        cout << "Enter expense category name: ";
        getline(cin, expenseName);
        cout << expenseName << " Expense: ";
        cin >> expenseAmount;
        
        // 8. Validate negative
        while (expenseAmount < 0) {
            cout << "Amount cannot be negative. Re-enter: ";
            cin >> expenseAmount;
        }
        totalExpenses += expenseAmount;
        cin.ignore();
    }

    // 9. Calculate remaining balance
    remainingBalance = totalIncome - totalExpenses;

    // 10. Classify budget status
    if (remainingBalance > 0) {
        budgetStatus = "Surplus / Saving";
    } else if (remainingBalance < 0) {
        budgetStatus = "Deficit / Overspending";
    } else {
        budgetStatus = "Balanced";
    }

    // 11. Display the budget report
    cout << "\nPERSONAL BUDGET REPORT" << endl;
    cout << "Owner Name: " << ownerName << endl;
    cout << "Budget Period: " << budgetPeriod << endl;
    cout << "Total Income: GHS " << totalIncome << ".00" << endl;
    cout << "Total Expenses: GHS " << totalExpenses << ".00" << endl;
    cout << "Remaining Balance: GHS " << remainingBalance << ".00" << endl;
    cout << "Budget Status: " << budgetStatus << endl;

    // 12. Save the report to file
    ofstream outFile("personal_budget_report.txt");
    if (outFile.is_open()) {
        outFile << "PERSONAL BUDGET REPORT" << endl;
        outFile << "Owner Name: " << ownerName << endl;
        outFile << "Budget Period: " << budgetPeriod << endl;
        outFile << "Total Income: GHS " << totalIncome << ".00" << endl;
        outFile << "Total Expenses: GHS " << totalExpenses << ".00" << endl;
        outFile << "Remaining Balance: GHS " << remainingBalance << ".00" << endl;
        outFile << "Budget Status: " << budgetStatus << endl;
        outFile.close();
        cout << "\nReport saved successfully to personal_budget_report.txt" << endl;
    } else {
        cout << "Error saving file!" << endl;
    }

    // 13. End programme
    return 0;
}
