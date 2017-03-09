@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"vigenere.exe" <"vigenere1.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"vigenere.exe" <"vigenere2.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"vigenere.exe" <"vigenere3.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"vigenere.exe" <"vigenere4.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"vigenere.exe" <"vigenere5.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"vigenere.exe" <"vigenere6.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"vigenere.exe" <"vigenere7.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"vigenere.exe" <"vigenere8.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"vigenere.exe" <"vigenere9.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"vigenere.exe" <"vigenere10.in" >"_tmpout"
time<enter
fc "_tmpout" "vigenere10.out" /W
pause
del _tmpout
echo.

