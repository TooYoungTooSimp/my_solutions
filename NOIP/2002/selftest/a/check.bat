@echo off
@set PATH=..\..\x64\Debug\;%PATH%

echo Test Case: 1
time<enter
"a.exe" <"a1.in" >"_tmpout"
time<enter
fc "_tmpout" "a1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"a.exe" <"a2.in" >"_tmpout"
time<enter
fc "_tmpout" "a2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"a.exe" <"a3.in" >"_tmpout"
time<enter
fc "_tmpout" "a3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"a.exe" <"a4.in" >"_tmpout"
time<enter
fc "_tmpout" "a4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"a.exe" <"a5.in" >"_tmpout"
time<enter
fc "_tmpout" "a5.out" /W
pause
del _tmpout
echo.

