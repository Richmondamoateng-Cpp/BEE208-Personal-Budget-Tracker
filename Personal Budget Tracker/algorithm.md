

*ALGORITHM: PERSONAL BUDGET TRACKER*

1. *Start* the programme.
2. *Display* the system title: `PERSONAL BUDGET TRACKER`.
3. *Prompt* the user to enter the budget owner name.
 *Store* it in `ownerName`.
4. *Prompt* the user to enter the budget period.
 *Store* it in `budgetPeriod`.
5. *Prompt* the user to enter the number of income sources.
 *Store* it in `numIncome`.
6. *Initialize* `totalIncome = 0`.
7. *Repeat* for `i = 1` to `numIncome`
 7.1. *Prompt* user to enter amount for `Income Source i`.
 7.2. *If* amount < 0, *repeat* step 7.1 until amount >= 0.
 7.3. *Add* amount to `totalIncome`.
8. *Prompt* the user to enter the number of expense categories.
 *Store* it in `numExpense`.
9. *Initialize* `totalExpenses = 0`.
10. *Repeat* for `i = 1` to `numExpense`
 10.1. *Prompt* user to enter expense category name.
 10.2. *Prompt* user to enter amount for that expense.
 10.3. *If* amount < 0, *repeat* step 10.2 until amount >= 0.
 10.4. *Add* amount to `totalExpenses`.
11. *Calculate* `remainingBalance = totalIncome - totalExpenses`.
12. *Classify Budget Status* using decision statements:
 12.1. *If* `remainingBalance > 0` then `budgetStatus = "Surplus / Saving"`
 12.2. *Else If* `remainingBalance < 0` then `budgetStatus = "Deficit / Overspending"`
 12.3. *Else* `budgetStatus = "Balanced"`
13. *Display* the budget report:
 Owner Name, Budget Period, Total Income, Total Expenses, Remaining Balance, Budget Status.
14. *Open* file `personal_budget_report.txt` for writing.
15. *Write* the same budget report details to the file.
16. *Close* the file.
 *Display* message: `Report saved successfully to personal_budget_report.txt`.
17. *End* the programme.


