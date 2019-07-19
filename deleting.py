import os

rem = []

a = os.getcwd()

b = os.listdir(a)

for i in b:
	if(i.endswith(".o") or i.endswith(".exe")):
		print(i)
		os.remove(i)

