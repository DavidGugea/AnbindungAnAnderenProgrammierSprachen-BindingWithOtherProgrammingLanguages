import ctypes

a = ctypes.c_char_p(b"Hallo Welt")
void_pointer = ctypes.cast(a, ctypes.c_void_p)
print(void_pointer.value)
print(ctypes.cast(void_pointer, ctypes.c_char_p).value)
