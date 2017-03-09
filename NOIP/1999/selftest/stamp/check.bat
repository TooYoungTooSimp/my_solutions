@echo off
echo Test Case: 1
time<enter
"stamp.exe" <"stamp1.in" >"_tmpout"
time<enter
fc "_tmpout" "stamp1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"stamp.exe" <"stamp2.in" >"_tmpout"
time<enter
fc "_tmpout" "stamp2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"stamp.exe" <"stamp3.in" >"_tmpout"
time<enter
fc "_tmpout" "stamp3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"stamp.exe" <"stamp4.in" >"_tmpout"
time<enter
fc "_tmpout" "stamp4.out" /W
pause
del _tmpout
echo.

