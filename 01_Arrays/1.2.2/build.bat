@echo off
set "COMPILER=g++" 
set "SOURCE_FILE=main.cpp ../../00_Lib/arrayLib.cpp ../../00_Lib/fileLib.cpp" 
set "OUTPUT_FILE=run.exe"

%COMPILER% %SOURCE_FILE% -o %OUTPUT_FILE%

if %ERRORLEVEL% == 0 (
    echo Compilation successful!
    if %1 == run (
        run.exe
    ) else (
        echo You can run your program by typing %OUTPUT_FILE%
    )
    
) else (
    echo Compilation failed.
)