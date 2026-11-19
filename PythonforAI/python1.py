"""
---------------------------------------------------Shortcuts
create code- code pp.py+ enter / code pp.cpp+enter 
run code- python python1.py
access terminal - ctrl+j
version = python --version
select all- ctrl + a 
save- ctsl + s
copy- ctrl + c
paste- ctrl + v
cut- ctrl + x
find- ctrl + f
undo- ctrl + z
settings- ctrl + ,
command palate- ctrl + p
open folder- ctrl + o
clear terminal- cls/clear 
see all files- ls

create a directry- uv init directory
get into a directory- cd directory
getout of any directory- exit
hirerchial tree structure = we can simply drag file into any folder to make its child

we can generate virtual enviroment 
uv venv --python 3.14
activate it- .\..ps1
deactivate it - deactivate

version of python u can see down of IDE
version= python --version

-------------------------------------------INSTALL LIBRARIES
uv add groq/ uv add python-dotenv/ uv add openai/ uv add pandas/ uv add requests
pip install groq/ pip install python-dotenv/ pip install pandas/ pip install requests

delete it - pip uninstall package_name
-------------------------------------------IMPORT LIABRARIES
import os/import pandas 
from groq import Groq
from openai import Open AI
from dotenv import load_dotenv

- If even after importing and installing some liabrary is not working
I suggest u to save code and then reopen visual studio code it should resolve that error

---------------------------------------------Interactve python
pip install ipykernel
Jupitor>Interactive window>Text editor>Execute settings - click the box and enable it
We can select any section of code(shift+arrow) then (shift+enter)
"""
print("Hello")

#initialising variables/ datatypes/ print statements
name="Vasu"        #string
age=21             #integer
temprature=-5      #negative integer
weight=118.65      #float
grade='A'          #character
print(name)
print(age)
print(temprature)
print(weight)
print(grade)

#////////////////////////////////////////////////////////
#strings
name="Vasu Mudgal"
print(name)
long_string="""
Hello! My name is vashu.
I am 21 years old.
"""
print(long_string)

#we can concatinate string
firstname="Vasu"
lastname="Mudgal"
fullname=firstname+ " " +lastname
print(fullname)

redundant=firstname*5
print(redundant)

#////////////////////////////////////////////////////////////

#boolean
age=21
is_child=(age<18)
is_adult=(age>=18)
print(is_child)
print(is_adult)

#/////////////////////////////////////////////////////////////

#Airthmatic operations
number1=10
number2=20

add= number1+number2
sub= number1-number2
mul= number1*number2
div= number1/number2
modulo= number2%number1
power= number1**5
floordiv=number1//number2  #round of 7//2==3.5->3

print(add)
print(sub)
print(mul)
print(div)
print(modulo)
print(power)

#comparision operator
print(number1==number2)
print(number1>number2)
print(number1<number2)
print(number1>=number2)
print(number1<=number2)
print(number1!=number2)

#logicaloperator- and(&&) or(||) not(!)

#replacement
#store value of number2 in number1
number1=number2
number1+=5
number1-=5
number1*=5
number1/=5
number1**=5
number1//3

#/////////////////////////////////////////////////////////////
#string methods
name="vasu"
print(f"hey! there my name is {name}")
age=21
print(f"hey! I am {name} and I am {age} years old")

my_name="vasu mudgal"
print(my_name.lower())
print(my_name.upper())
print(my_name.title())

text="""Hello! there my name is vasu and I am 21 years old"""
print(text.lower())
print(text.upper())
print(text.title())

#check/find/replace
print("Python" in text)
print("vasu" in text)

print(text.find("vasu"))     #24
print(text.find("Python"))   #not exists(-1)

new_text=text.replace("vasu","chunnu")
print(new_text)
#////////////////////////////////////////////////////////////
#conditional and loop
password="jzksvb"
user_password=input("Enter password: ")

if(user_password==password):
    print("Allow access")
elif(user_password==""):
    print("did not enter any password")
else:
    print("Deny access")

# 0 indexing
for i in range(5):     
    print(i)
# custum range- 1 to 5
for i in range(1,5):
    print(i)
# skipper
for i in range(0,10,2):
    print(i)
#///////////////////////////////////////////////////////////////
#Data Structure

#Lists- can store any datatype in list
my_list=[1,2,34,"Vasu","chunnu",4.55]
#front
print(my_list[0])
print(my_list[4])
#back
print(my_list[-1])
print(my_list[-3])
#slicing
print(my_list[1:4])
print(my_list[1:])

#Lists are mutuable
my_list[0]="jira"
print(my_list)
#append
my_list.append("ero")
my_list.append(9)
print(my_list)
#insert at pos
my_list.insert(1,"chunnu") 
print(my_list)
#removal
my_list.pop() 
my_list.remove("jira")
del my_list[2]
print(my_list)

my_list=[1,2,3,4,5,1,2,3,4,5]
print(len(my_list))
print(my_list.count(1))
print(my_list.index(5))

my_list.sort()
print(my_list)

my_list.reverse()
print(my_list)  

copied_list=my_list.copy()
print(copied_list)

my_list.clear()
print(my_list)
#////////////////////////////////////////////////////////////////////TAKE INPUT
my_name=str(input("Enter ur name: "))
my_age=int(input("Enter ur age: "))
print(f"Hello my name is {my_name} and I am {my_age} years old")