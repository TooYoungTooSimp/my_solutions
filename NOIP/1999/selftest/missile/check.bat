@echo off
echo Test Case: 1
time<enter
"missile.exe" <"missile1.in" >"_tmpout"
time<enter
fc "_tmpout" "missile1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"missile.exe" <"missile2.in" >"_tmpout"
time<enter
fc "_tmpout" "missile2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"missile.exe" <"missile3.in" >"_tmpout"
time<enter
fc "_tmpout" "missile3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"missile.exe" <"missile4.in" >"_tmpout"
time<enter
fc "_tmpout" "missile4.out" /W
pause
del _tmpout
echo.

