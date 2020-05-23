import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen/Dll1.dll"
bib = ctypes.CDLL(DIR)

STR = bib.testFunc()
print(STR)
