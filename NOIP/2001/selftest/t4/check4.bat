@echo off
echo Test Case: 1
time<enter
"t4.exe" <"t41.in" >"_tmpout"
time<enter
fc "_tmpout" "t41.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"t4.exe" <"t42.in" >"_tmpout"
time<enter
fc "_tmpout" "t42.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"t4.exe" <"t43.in" >"_tmpout"
time<enter
fc "_tmpout" "t43.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"t4.exe" <"t44.in" >"_tmpout"
time<enter
fc "_tmpout" "t44.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"t4.exe" <"t45.in" >"_tmpout"
time<enter
fc "_tmpout" "t45.out" /W
pause
del _tmpout
echo.

