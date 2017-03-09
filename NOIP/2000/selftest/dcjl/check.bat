@echo off
echo Test Case: 1
time<enter
"dcjl.exe" <"dcjl1.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"dcjl.exe" <"dcjl2.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"dcjl.exe" <"dcjl3.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"dcjl.exe" <"dcjl4.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"dcjl.exe" <"dcjl5.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"dcjl.exe" <"dcjl6.in" >"_tmpout"
time<enter
fc "_tmpout" "dcjl6.out" /W
pause
del _tmpout
echo.

