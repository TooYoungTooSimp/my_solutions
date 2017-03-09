@echo off
echo Test Case: 1
time<enter
"t3.exe" <"t31.in" >"_tmpout"
time<enter
fc "_tmpout" "t31.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"t3.exe" <"t32.in" >"_tmpout"
time<enter
fc "_tmpout" "t32.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"t3.exe" <"t33.in" >"_tmpout"
time<enter
fc "_tmpout" "t33.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"t3.exe" <"t34.in" >"_tmpout"
time<enter
fc "_tmpout" "t34.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"t3.exe" <"t35.in" >"_tmpout"
time<enter
fc "_tmpout" "t35.out" /W
pause
del _tmpout
echo.

