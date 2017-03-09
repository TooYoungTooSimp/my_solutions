@echo off
echo Test Case: 1
time<enter
"fjz.exe" <"fjz1.in" >"_tmpout"
time<enter
fc "_tmpout" "fjz1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"fjz.exe" <"fjz2.in" >"_tmpout"
time<enter
fc "_tmpout" "fjz2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"fjz.exe" <"fjz3.in" >"_tmpout"
time<enter
fc "_tmpout" "fjz3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"fjz.exe" <"fjz4.in" >"_tmpout"
time<enter
fc "_tmpout" "fjz4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"fjz.exe" <"fjz5.in" >"_tmpout"
time<enter
fc "_tmpout" "fjz5.out" /W
pause
del _tmpout
echo.

