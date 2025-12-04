class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def fullname(self):
        return f"{self.model} {self.brand}"

class ElectricCar(Car):
    def __init__(self,brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size = battery_size


class HybridCar(ElectricCar):
    def __init__(self,brand, model, battery_size, engine):
        super().__init__(brand,model,battery_size)
        self.engine = engine



my_HybridCar = HybridCar("Toyota", "Camry", "60kwh","v6-engine")
print(my_HybridCar.fullname())

# my_tesla = ElectricCar("Tesla", "Model s", "85kwh")
# print(my_tesla.fullname())

# my_car = Car("Toyota", "Corolla")
# print(my_car.fullname())