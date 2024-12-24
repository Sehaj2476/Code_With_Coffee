import sys

def pay_money(a, espresso, tea, latte, mocha):
    money_payable = float(input("Please enter the amount 😇💰\n"))
    if a==1:
        if espresso < money_payable:
            print(f"Thankyou so much for paying. Here is the return amount ${money_payable-espresso} 🙂")
        if espresso == money_payable:
            print("Thankyou so much for paying. 🙂")
        if espresso > money_payable:
            print("OHH NO!! You will need to re-order. You didn't pay enough money. ☹️")
    if a==4:
        if tea < money_payable:
            print(f"Thankyou so much for paying. Here is the return amount ${money_payable-tea} 🙂")
        if tea==money_payable:
            print("Thankyou so much for paying. 🙂")
        if tea > money_payable:
            print("OHH NO!! You will need to re-order. You didn't pay enough money. ☹️")
    if a==2:
        if latte < money_payable:
            print(f"Thankyou so much for paying. Here is the return amount ${money_payable-latte} 🙂")
        if latte==money_payable:
            print("Thankyou so much for paying. 🙂")
        if latte > money_payable:
            print("OHH NO!! You will need to re-order. You didn't pay enough money. ☹️")   
    if a==3:
        if mocha < money_payable:
            print(f"Thankyou so much for paying. Here is the return amount ${money_payable-mocha} 🙂")
        if mocha==money_payable:
            print("Thankyou so much for paying. 🙂")
        if mocha > money_payable:
            print("OHH NO!! You will need to re-order. You didn't pay enough money. ☹️")  

print("=============================================================")
print("☕😇 A GOOD CUP ☕😇")
print("Enter 1 to drink 'espresso': ")
print("Enter 2 to drink 'latte': ")
print("Enter 3 to drink 'mocha': ")
print("Enter 4 to drink 'tea': ")
a = float(input("Enter choice: \n"))
latte = 10.25
mocha = 11.45
espresso = 8.00
tea = 9.00
print("=============================================================")
if a==1:
    print("Alright, an espresso will cost you $8.00 ☕😇")
elif a==2:
    print("Alright, a latte will cost you $10.25 ☕😇")
elif a==3:
    print("Alright, a mocha will cost you $11.45 ☕😇")
elif a==4:
    print("Alright, a tea will cost you $9.00 ☕😇")
else:
    print("I believe you chose to exit the program!! See you Soon\n💖 Stay Hydrated💖")
    exit()
pay_money(a, espresso, tea, latte, mocha)

