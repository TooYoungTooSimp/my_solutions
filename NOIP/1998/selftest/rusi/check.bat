@echo off
echo Test Case: 1
time<enter
"..\..\rusi.exe" <"rusi1.in" >"_tmpout"
time<enter
fc "_tmpout" "rusi1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"..\..\rusi.exe" <"rusi2.in" >"_tmpout"
time<enter
fc "_tmpout" "rusi2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"..\..\rusi.exe" <"rusi3.in" >"_tmpout"
time<enter
fc "_tmpout" "rusi3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"..\..\rusi.exe" <"rusi4.in" >"_tmpout"
time<enter
fc "_tmpout" "rusi4.out" /W
pause
del _tmpout
echo.

