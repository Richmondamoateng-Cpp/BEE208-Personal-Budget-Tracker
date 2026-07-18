### **Personal Budget Tracker**



##### **Project Information**

\-Class: Btech Electrical / Electronics Engineering.

\-Course: BEE 208 C++ Programming.

\-Lecturer: Douglas Ayitey.

\-Project Category: Non-Technical C++ Application.







##### Group Members

|**Student**|**Index №**|**Role**|
|-|-|-|
|Asafo-Adjei Ivan|01243590B|Project lead|
|Eric Tetteh|01242294B|Algorithm writer|
|Asante Quaye Christian|01243179B|Pseudocode writer|
|Awuku Desmond Osei|01245534B|Flowchart Designer|
|Nartey Lanus Tetteh Kumah|01245454B|C++ Programmer|
|Siaw Prince Oppong|01246446B|C++ Programmer|
|Meteku Daniel Yaw Sitsofe|01245549B|Testing lead|
|Amoateng Richmond|01243035B|GitHub Manager|
|Mensah Semekor Collins|01242767B|Documentation lead|
||||







##### Problem Statement

Many people spend money without keeping proper records of income and expenses. This project provides a simple C++ application that helps an individual track income, expenses, balance, and budget status.





##### Aim \& Objectives

\- Record income and expenses

\- Calculate totals and balance

\- Classify budget status (Surplus, Balanced, Overspending)

\- Save report to a text file

\- Provide clear output and documentation





##### How the Budget Tracker Works

1\. User enters name and budget period.

2\. User inputs multiple income sources.

3\. User inputs multiple expense categories.

4\. Program validates inputs (no negatives).

5\. Program calculates totals and balance.

6\. Program classifies budget status.

7\. Report is displayed and saved to `personal\_budget\_report.txt`.





##### Algorithm \& Pseudocode Summary

\- Algorithm: The algorithm begins with the program starting and displaying the system title. It then collects the user’s details such as the budget owner’s name and the budget period. After that, the program asks for income sources and uses a loop to gather each amount, ensuring that no negative values are accepted. Once all income is recorded, the program moves on to expenses, again looping through each category and validating the inputs. With both totals calculated, the program determines the remaining balance by subtracting expenses from income. Decision logic is then applied to classify the budget status as surplus, balanced, or overspending. Finally, the program presents the budget report on screen and saves it to a text file before ending. See `algorithm.md'

\- Pseudocode: See `Personal Budget Tracker/pseudocode.md`





##### Flowchart

!\[Flowchart](flowchart.png)
The flowchart accurately represents the logical structure of the Personal Budget Tracker system. It begins with user input for the budget owner’s details and smoothly transitions into loops that handle multiple income and expense entries. Each decision symbol correctly checks for negative values, ensuring proper validation before calculations proceed. The process boxes for computing total income, total expenses, and balance are placed in logical sequence, followed by decision branches that classify the budget status as Surplus, Balanced, or Overspending. The final output and file-saving steps complete the workflow neatly. Overall, the flowchart demonstrates clear logic, proper use of symbols, and an organized flow that aligns perfectly with the algorithm and pseudocode requirements of the project.




##### C++ Concepts Used

\- Input/Output (`cin`, `cout`)

\- Variables and data types

\- Loops (`for`)

\- Decision statements (`if`, `else`)

\- Functions for validation and calculation

\- Classes and objects

\- Vectors for storing records

\- File handling (`ofstream`)





##### Challenges \& Solutions

\-Challenge: Handling negative inputs

\-Solution: Added validation function to reject invalid values





##### Conclusion

This project demonstrates how C++ can be applied to everyday problems like personal budgeting. It combines programming concepts with practical financial management.

