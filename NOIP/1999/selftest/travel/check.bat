@echo off
echo Test Case: 1
time<enter
"travel.exe" <"travel1.in" >"_tmpout"
time<enter
fc "_tmpout" "travel1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"travel.exe" <"travel2.in" >"_tmpout"
time<enter
fc "_tmpout" "travel2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"travel.exe" <"travel3.in" >"_tmpout"
time<enter
fc "_tmpout" "travel3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"travel.exe" <"travel4.in" >"_tmpout"
time<enter
fc "_tmpout" "travel4.out" /W
pause
del _tmpout
echo.

