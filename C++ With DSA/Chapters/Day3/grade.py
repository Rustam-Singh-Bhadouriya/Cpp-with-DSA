"""
marks >= 90 -> A
marks are 90-80 -> B
makrs are less then 80 -> C

"""
marks = int(input("Enter marks: "))
if(marks >= 90):
    print("A")
elif(marks >= 80 and marks < 90):
    print("B")
else:
    print("C")