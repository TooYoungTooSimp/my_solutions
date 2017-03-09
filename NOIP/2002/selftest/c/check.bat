@echo off
@set PATH=..\..\x64\Debug\;%PATH%

echo Test Case: 1
time<enter
"c.exe" <"c1.in" >"_tmpout"
time<enter
fc "_tmpout" "c1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"c.exe" <"c2.in" >"_tmpout"
time<enter
fc "_tmpout" "c2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"c.exe" <"c3.in" >"_tmpout"
time<enter
fc "_tmpout" "c3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"c.exe" <"c4.in" >"_tmpout"
time<enter
fc "_tmpout" "c4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"c.exe" <"c5.in" >"_tmpout"
time<enter
fc "_tmpout" "c5.out" /W
pause
del _tmpout
echo.

