@echo off
echo Test Case: 1
time<enter
"maxmu.exe" <"maxmu1.in" >"_tmpout"
time<enter
fc "_tmpout" "maxmu1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"maxmu.exe" <"maxmu2.in" >"_tmpout"
time<enter
fc "_tmpout" "maxmu2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"maxmu.exe" <"maxmu3.in" >"_tmpout"
time<enter
fc "_tmpout" "maxmu3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"maxmu.exe" <"maxmu4.in" >"_tmpout"
time<enter
fc "_tmpout" "maxmu4.out" /W
pause
del _tmpout
echo.

