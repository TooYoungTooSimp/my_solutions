@echo off
echo Test Case: 1
time<enter
"fgqs.exe" <"fgqs1.in" >"_tmpout"
time<enter
fc "_tmpout" "fgqs1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"fgqs.exe" <"fgqs2.in" >"_tmpout"
time<enter
fc "_tmpout" "fgqs2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"fgqs.exe" <"fgqs3.in" >"_tmpout"
time<enter
fc "_tmpout" "fgqs3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"fgqs.exe" <"fgqs4.in" >"_tmpout"
time<enter
fc "_tmpout" "fgqs4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"fgqs.exe" <"fgqs5.in" >"_tmpout"
time<enter
fc "_tmpout" "fgqs5.out" /W
pause
del _tmpout
echo.

