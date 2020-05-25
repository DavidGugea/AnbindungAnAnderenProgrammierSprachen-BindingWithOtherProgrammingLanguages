import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen-BindingWithOtherProgrammingLanguages/CPP_DLL_5.dll"
bib = ctypes.CDLL(DIR)

# print(bib.fakultaet(5))

"""
arraytyp = ctypes.c_int * 10
x = arraytyp(10, 9, 8, 7, 6, 5, 4, 3, 2, 1)
print([i for i in x])
bib.sortiere(x, len(x))
print([i for i in x])
"""

"""
bib.veclen.restype = ctypes.c_double
bib.veclen.argtypes = [ctypes.c_double, ctypes.c_double, ctypes.c_double]
print(bib.veclen(ctypes.c_double(1.5), ctypes.c_double(2.7), ctypes.c_double(3.9)))
"""
