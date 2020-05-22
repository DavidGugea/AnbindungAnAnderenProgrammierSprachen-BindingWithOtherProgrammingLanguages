import ctypes

'''
MSVCRT --> Windows
libc.so.6 -- > Linux
libc.dylib -- > Mac OS
'''

bibliothek = ctypes.CDLL("MSVCRT")
bibliothek.printf(b"Hallo Welt\n")
bibliothek.wprintf("Hallo Welt")
