@echo off
echo Test Case: 1
time<enter
"t1.exe" <"t11.in" >"_tmpout"
time<enter
fc "_tmpout" "t11.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"t1.exe" <"t12.in" >"_tmpout"
time<enter
fc "_tmpout" "t12.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"t1.exe" <"t13.in" >"_tmpout"
time<enter
fc "_tmpout" "t13.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"t1.exe" <"t14.in" >"_tmpout"
time<enter
fc "_tmpout" "t14.out" /W
pause
del _tmpout
echo.

