import os
import glob

a=os.getcwd()
b=glob.glob(a+"\\*\\*")
for i in b:
	if ".exe" in i:
		os.system('del '+i)


