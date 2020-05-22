import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAndereProgrammierSprachen/Bibliothek.dll"
open_dll = ctypes.CDLL(DIR)

print(open_dll.__doc__)
