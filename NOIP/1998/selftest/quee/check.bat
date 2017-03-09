@echo off
echo Test Case: 1
time<enter
"..\..\quee.exe" <"quee1.in" >"_tmpout"
time<enter
fc "_tmpout" "quee1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"..\..\quee.exe" <"quee2.in" >"_tmpout"
time<enter
fc "_tmpout" "quee2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"..\..\quee.exe" <"quee3.in" >"_tmpout"
time<enter
fc "_tmpout" "quee3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"..\..\quee.exe" <"quee4.in" >"_tmpout"
time<enter
fc "_tmpout" "quee4.out" /W
pause
del _tmpout
echo.

