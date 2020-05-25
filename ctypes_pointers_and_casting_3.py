import ctypes

s = ctypes.c_char_p(b"Hallo Welt")
print("s -- > {0}".format(s))
vp = ctypes.cast(s, ctypes.c_void_p)
print("vp -- > {0}".format(vp))
print("vp.value -- > {0}".format(vp.value))
print(" -- > {0}".format(ctypes.cast(vp, ctypes.c_char_p).value))
