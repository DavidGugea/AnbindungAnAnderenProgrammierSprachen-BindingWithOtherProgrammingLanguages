#include <stdio.h>
#include <stdlib.h>
#include "Python.h"

static PyObject *chiffre_caesar(PyObject *self, PyObject *args);
static PyMethodDef ChiffreMethods[] =
{
    {
        "caesar", chiffre_caesar, METH_VARARGS,
        "Perform Caesar cipher encryption."
    },
    {
        NULL, NULL, 0, NULL // In case that something doesn't work change the third NULL to be 0
    }
};
static PyModuleDef ChiffreModule =
{
    PyModuleDef_HEAD_INIT,
    "chiffre",
    "Performs insane encryption operations",
    -1,
    ChiffreMethods
};
PyMODINIT_FUNC PyInit_chiffre(void)
{
    return PyModule_Create(&ChiffreModule);
};

static PyObject *chiffre_caesar(PyObject *self, PyObject *args)
{
    char *text, *encrypted, *c, *e;
    PyObject *result = NULL;
    int cipher, length;
    if(!PyArg_ParseTuple(args, "si", &text, &cipher))
        return NULL;
    length = strlen(text);
    encrypted = (char *)malloc(length+1);
    encrypted[length] = '\0';
    for(c = text, e = encrypted; *c; c++, e++))
    {
        if((*c < 'A') || (*c > 'Z'))
        {
            PyErr_SetString(PyExc_ValueError, "Character out of range");
        }

        *e = ((*c - 'A' + cipher) % 26) + 'A';
    }

    result = Py_BuildValue("s", encrypted);
    free(encrypted);
    return result;
}

int main()
{
    return 0;
}
