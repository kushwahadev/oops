class Car:
    def __init__(self,brand, model):
        self.brand = brand
        self.model = model

    def fuel_type(self):
        return "petrol or diesel"

class ElectricCar(Car):
    def __init__(self,brand, model, battery):
        super().__init__(brand,model)
        self.battery = battery

    def fuel_type(self):
        return "electric"

my_tata = Car("Tata", "Safari")

my_tesla = ElectricCar("Tesla","Model S","75kwh")
print(my_tata.fuel_type())
print(my_tesla.fuel_type())

