@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"jsp.exe" <"jsp1.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"jsp.exe" <"jsp2.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"jsp.exe" <"jsp3.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"jsp.exe" <"jsp4.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"jsp.exe" <"jsp5.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"jsp.exe" <"jsp6.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"jsp.exe" <"jsp7.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"jsp.exe" <"jsp8.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"jsp.exe" <"jsp9.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"jsp.exe" <"jsp10.in" >"_tmpout"
time<enter
fc "_tmpout" "jsp10.out" /W
pause
del _tmpout
echo.

