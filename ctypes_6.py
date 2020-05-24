import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen/CPP_DLL_3.dll"
bibliothek = ctypes.CDLL(DIR)

# print(bibliothek.fakultaet(5))
# print(bibliothek.veclen(2, 3, 4))
'''
x = list(range(1, 6))[::-1]
print(x)
bibliothek.sortiere(x, len(x))
print(x)
'''
