class BankAccount:
    def __init__(self,account_number, client, balance):
        self.__account_number = account_number
        self.client = client
        self.__balance = balance

    def client_details(self):
        return f"{self.client} {self.__account_number}"


    def get_balance(self):
        return self.__balance

    def set_balance(self,balance):
        if balance > 0:
            self.__balance = balance



my_account = BankAccount("82363636", "clint", 2000)
print(my_account.client_details())
print(my_account.get_balance())

