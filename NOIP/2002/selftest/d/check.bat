@echo off
@set PATH=..\..\x64\Debug\;%PATH%

echo Test Case: 1
time<enter
"d.exe" <"d1.in" >"_tmpout"
time<enter
fc "_tmpout" "d1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"d.exe" <"d2.in" >"_tmpout"
time<enter
fc "_tmpout" "d2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"d.exe" <"d3.in" >"_tmpout"
time<enter
fc "_tmpout" "d3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"d.exe" <"d4.in" >"_tmpout"
time<enter
fc "_tmpout" "d4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"d.exe" <"d5.in" >"_tmpout"
time<enter
fc "_tmpout" "d5.out" /W
pause
del _tmpout
echo.

