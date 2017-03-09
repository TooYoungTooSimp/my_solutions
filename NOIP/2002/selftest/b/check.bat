@echo off
@set PATH=..\..\x64\Debug\;%PATH%

echo Test Case: 1
time<enter
"b.exe" <"b1.in" >"_tmpout"
time<enter
fc "_tmpout" "b1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"b.exe" <"b2.in" >"_tmpout"
time<enter
fc "_tmpout" "b2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"b.exe" <"b3.in" >"_tmpout"
time<enter
fc "_tmpout" "b3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"b.exe" <"b4.in" >"_tmpout"
time<enter
fc "_tmpout" "b4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"b.exe" <"b5.in" >"_tmpout"
time<enter
fc "_tmpout" "b5.out" /W
pause
del _tmpout
echo.

