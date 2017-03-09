@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"digital.exe" <"digital1.in" >"_tmpout"
time<enter
fc "_tmpout" "digital1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"digital.exe" <"digital2.in" >"_tmpout"
time<enter
fc "_tmpout" "digital2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"digital.exe" <"digital3.in" >"_tmpout"
time<enter
fc "_tmpout" "digital3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"digital.exe" <"digital4.in" >"_tmpout"
time<enter
fc "_tmpout" "digital4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"digital.exe" <"digital5.in" >"_tmpout"
time<enter
fc "_tmpout" "digital5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"digital.exe" <"digital6.in" >"_tmpout"
time<enter
fc "_tmpout" "digital6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"digital.exe" <"digital7.in" >"_tmpout"
time<enter
fc "_tmpout" "digital7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"digital.exe" <"digital8.in" >"_tmpout"
time<enter
fc "_tmpout" "digital8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"digital.exe" <"digital9.in" >"_tmpout"
time<enter
fc "_tmpout" "digital9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"digital.exe" <"digital10.in" >"_tmpout"
time<enter
fc "_tmpout" "digital10.out" /W
pause
del _tmpout
echo.

