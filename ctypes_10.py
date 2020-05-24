import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen-BindingWithOtherProgrammingLanguages/CPP_DLL_4.dll"
bib = ctypes.CDLL(DIR)

bib.veclen.restype = ctypes.c_double
print(bib.veclen(ctypes.c_double(1.5), ctypes.c_double(2.7), ctypes.c_double(3.9)))
