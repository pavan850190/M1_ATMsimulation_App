## features
- To view the balance
- To withdraw balance
- To deposit balance

## State of art/ Research
Now a days the people are not intrested in wasting time and due to covid they are not intrested to go to bank for money in thise case we use atm these atm Automated teller machines (ATMs) have altered the relationship between banks and their depositors, as well as the competitive relationships among banks. Which help the people to get money instant in there locality.If an error occurs, the ATM will automatically shutdown and return the card to the user.A main menu will be output to the display after validation of the PIN. The User selects Withdraw from the menu and withdraws cash from the ATM. The User selects Deposit option from the menu and deposits cash or cheques into the ATM. 
1. Account balance checking
2. ATM Cash withdrawal
3. Deposition of cash
## 4 W's and 1H
### Who
People to who need monwy
### When
when the people required money and save time.
### What
Verifying the the account details and add/subtract money.
### Where
Around many places in town.
### How
Geting money after inserting atm card and entering pin.
## SWOT
![swot](https://user-images.githubusercontent.com/68550769/153435609-9a1ecdd5-6e61-4c4c-bf72-8b1c5915a0e4.jpg)


## High Level Requirements

| ID | Description | Status |
| -- | ----------- | ------ |
| HR01 | 	Main Menu | Implemented |
| HR02 | Deposit |	Implemented |
| HR03 |	Balance enguiry |	Implemented |
| HR04 |	Cash withdraw |	Implemented |
| HR05 |	Graphical | User | Interface |	Future |

1. A customer must be able to make a cash withdrawal from any suitable account linked to the card, in multiples of 100.
2.  A customer must be able to make a deposit to any account linked to the card, consisting of cash and/or checks in an envelope. The customer will enter the amount of the deposit into the ATM, subject to manual verification when the envelope is removed from the machine by an operator. 
3.   A customer must be able to make a balance inquiry of any account linked to the card.

## Low Level Requirements

| ID | Description | HR ID | Status |
| -- | ----------- | ----- | ------ |
| LR01 |	Main menu should consist 4 options: 1.Deposit, 2.BalanceEnquiry, 3.CashWithdraw |	HR01 |	Implemented |
| LR02 |	Reading user input to select particular option | HR01 |	Implemented |
| LR03 |	Output screen will display the overall balance |	HR03 |	Implemented  |
| LR04 |	Read user input to withdraw entered amount exactly |	HR04 |	Implemented |
| LR05 |	Should display final updated balance after credit or debit |	HR02 |	Implemented |
| LR06 |	A clean graphical user interface with all required buttons for ease of use |	HR05 |	Future |

1. An ATM machine accepts a card from a user.
2. The user inputs a PIN to authenticate the user’s identity.
3. The system validates the card and the PIN then either continues processing or rejects the card.
4. The ATM prompts the validated user for the type of transaction.

## Best method followed
- Used functions to decrease dependency on main function
- Used loops to exicute the commands one bye one and follow the flow.
- Printf statements have been placed only wherever necessary to avoid confusions
- Created header file so that the fuctions can be used else where ever required without any difficulty


