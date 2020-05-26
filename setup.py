from setuptools import setup, Extension

modul = Extension("chiffre", sources=["chiffre/chiffre.c"])
setup(
    name = "PyChiffre",
    version = "1.0",
    description = "Module for encryption techniques.",
    ext_modules = [modul]
        )
