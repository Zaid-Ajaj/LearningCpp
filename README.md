# Building (Windows)
```
# set enviroment variables
vcvars32 
# use Microsoft C++ Compiler 'cl' to compile any of the files
# the files are standalone 
cl [file-name].cpp /Fe:build/out.exe /Fo:build/out.obj
# Run executable
build\out.exe
```