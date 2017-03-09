@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"core.exe" <"core1.in" >"_tmpout"
time<enter
fc "_tmpout" "core1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"core.exe" <"core2.in" >"_tmpout"
time<enter
fc "_tmpout" "core2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"core.exe" <"core3.in" >"_tmpout"
time<enter
fc "_tmpout" "core3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"core.exe" <"core4.in" >"_tmpout"
time<enter
fc "_tmpout" "core4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"core.exe" <"core5.in" >"_tmpout"
time<enter
fc "_tmpout" "core5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"core.exe" <"core6.in" >"_tmpout"
time<enter
fc "_tmpout" "core6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"core.exe" <"core7.in" >"_tmpout"
time<enter
fc "_tmpout" "core7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"core.exe" <"core8.in" >"_tmpout"
time<enter
fc "_tmpout" "core8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"core.exe" <"core9.in" >"_tmpout"
time<enter
fc "_tmpout" "core9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"core.exe" <"core10.in" >"_tmpout"
time<enter
fc "_tmpout" "core10.out" /W
pause
del _tmpout
echo.

