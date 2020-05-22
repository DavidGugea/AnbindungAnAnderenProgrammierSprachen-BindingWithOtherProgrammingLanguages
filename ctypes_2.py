import ctypes

bib = ctypes.CDLL("G:\David\PROGRAMMING\PythonBook\AnbindungAnAndereProgrammierSprachen/Bibliothek.dll")
print(bib.__doc__)

print(bib)
