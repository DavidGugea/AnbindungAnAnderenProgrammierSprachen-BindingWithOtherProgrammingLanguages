import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen/CPP_DLL_4.dll"
bind = ctypes.CDLL(DIR)

# bind.testFunction()
# print(bind.fakultaet(5))
# print(bind.veclen(1, 2, 3))

f = ctypes.c_float(1.337)
print(f)
s = ctypes.c_char_p(b"Hallo Welt") 
print(s.value)
null = ctypes.c_void_p(None)
print(null)

arraytyp = ctypes.c_int * 5
a = arraytyp(1, 5, 2, 1, 9)
print(a)
