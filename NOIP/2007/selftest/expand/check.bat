@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"expand.exe" <"expand1.in" >"_tmpout"
time<enter
fc "_tmpout" "expand1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"expand.exe" <"expand2.in" >"_tmpout"
time<enter
fc "_tmpout" "expand2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"expand.exe" <"expand3.in" >"_tmpout"
time<enter
fc "_tmpout" "expand3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"expand.exe" <"expand4.in" >"_tmpout"
time<enter
fc "_tmpout" "expand4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"expand.exe" <"expand5.in" >"_tmpout"
time<enter
fc "_tmpout" "expand5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"expand.exe" <"expand6.in" >"_tmpout"
time<enter
fc "_tmpout" "expand6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"expand.exe" <"expand7.in" >"_tmpout"
time<enter
fc "_tmpout" "expand7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"expand.exe" <"expand8.in" >"_tmpout"
time<enter
fc "_tmpout" "expand8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"expand.exe" <"expand9.in" >"_tmpout"
time<enter
fc "_tmpout" "expand9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"expand.exe" <"expand10.in" >"_tmpout"
time<enter
fc "_tmpout" "expand10.out" /W
pause
del _tmpout
echo.

