import ctypes

"""
a = 2
print(ctypes.addressof(ctypes.c_int(a)))
"""

bib = ctypes.CDLL("MSVCRT")

x = ctypes.c_int()
bib.scanf(b"%d", ctypes.byref(x))

