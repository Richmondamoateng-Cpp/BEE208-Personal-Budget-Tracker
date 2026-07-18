BEGIN

DISPLAY "PERSONAL BUDGET TRACKER"

INPUT ownerName
INPUT budgetPeriod

INPUT numberOfIncomeSources
FOR each income source
    INPUT incomeAmount
    ADD incomeAmount to totalIncome
END FOR

INPUT numberOfExpenseCategories
FOR each expense category
    INPUT expenseAmount
    ADD expenseAmount to totalExpenses
END FOR

balance = totalIncome - totalExpenses

IF totalIncome > totalExpenses
    budgetStatus = "Surplus"
ELSE IF totalIncome = totalExpenses
    budgetStatus = "Balanced Budget"
ELSE
    budgetStatus = "Overspending"
END IF

DISPLAY report
SAVE report to file

END