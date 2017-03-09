@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"matrix.exe" <"matrix1.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"matrix.exe" <"matrix2.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"matrix.exe" <"matrix3.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"matrix.exe" <"matrix4.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"matrix.exe" <"matrix5.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"matrix.exe" <"matrix6.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"matrix.exe" <"matrix7.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"matrix.exe" <"matrix8.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"matrix.exe" <"matrix9.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"matrix.exe" <"matrix10.in" >"_tmpout"
time<enter
fc "_tmpout" "matrix10.out" /W
pause
del _tmpout
echo.

