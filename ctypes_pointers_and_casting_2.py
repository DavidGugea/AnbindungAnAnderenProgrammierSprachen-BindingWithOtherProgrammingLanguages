import ctypes

bib = ctypes.CDLL("MSVCRT")
a = ctypes.c_int(2)

for i in range(3):
    print()

x = ctypes.c_int()
bib.scanf(b"%d", ctypes.byref(x))
print(x)
