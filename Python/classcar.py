class Car:
    def __init__(self, engine, doorsCount=4,
                 color="white"):
        self.engine = engine
        self.doorsCount = doorsCount
        self.color = color

    def isRun(self):
        print("The car is run...")

    def run__backwards(self):
        print("The car can go backwards.")

class Niva(Car):
		 pass

mycar = Niva("2101")
print(mycar.engine)
print(mycar.doorsCount)
print(mycar.color)
mycar.isRun()
mycar.run__backwards()
