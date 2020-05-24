import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen-BindingWithOtherProgrammingLanguages/CPP_DLL_4.dll"
bib = ctypes.CDLL(DIR)

arraytyp = ctypes.c_int*10
a = arraytyp(0, 2, 5, 2, 8, 1, 4, 7, 3, 8)
print([i for i in a])
bib.bubbleSort(a, 10)
print([i for i in a])
