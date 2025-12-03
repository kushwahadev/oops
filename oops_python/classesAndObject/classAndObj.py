class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def fullname(self):
        return f"{self.model} {self.brand}"



my_car = Car("Toyota", "Corolla");
print(my_car.fullname())
