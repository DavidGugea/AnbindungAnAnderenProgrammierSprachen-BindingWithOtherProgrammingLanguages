import ctypes

bib = ctypes.CDLL("MSVCRT")
s = ctypes.create_string_buffer(20)
bib.sprintf(s, b"Die Zahl ist: %d", 12)
print(s)
print(s.value)
