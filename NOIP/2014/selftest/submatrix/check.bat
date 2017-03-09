@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"submatrix.exe" <"submatrix1.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"submatrix.exe" <"submatrix2.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"submatrix.exe" <"submatrix3.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"submatrix.exe" <"submatrix4.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"submatrix.exe" <"submatrix5.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"submatrix.exe" <"submatrix6.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"submatrix.exe" <"submatrix7.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"submatrix.exe" <"submatrix8.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"submatrix.exe" <"submatrix9.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"submatrix.exe" <"submatrix10.in" >"_tmpout"
time<enter
fc "_tmpout" "submatrix10.out" /W
pause
del _tmpout
echo.

