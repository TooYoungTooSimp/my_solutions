@echo off
echo Test Case: 1
time<enter
"t2.exe" <"t21.in" >"_tmpout"
time<enter
fc "_tmpout" "t21.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"t2.exe" <"t22.in" >"_tmpout"
time<enter
fc "_tmpout" "t22.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"t2.exe" <"t23.in" >"_tmpout"
time<enter
fc "_tmpout" "t23.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"t2.exe" <"t24.in" >"_tmpout"
time<enter
fc "_tmpout" "t24.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"t2.exe" <"t25.in" >"_tmpout"
time<enter
fc "_tmpout" "t25.out" /W
pause
del _tmpout
echo.

