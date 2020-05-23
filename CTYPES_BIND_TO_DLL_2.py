import ctypes

DIR = "G:/David/PROGRAMMING/PythonBook/AnbindungAnAnderenProgrammierSprachen/DLL_CPP_2.dll"
bind = ctypes.CDLL(DIR)

# bind.testFunction()
# print(bind.factorial(5))
# print(bind.self_pow(2, 3))
# print(bind.sayHi())
# print(bind.helloWorld())
