@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"rps.exe" <"rps1.in" >"_tmpout"
time<enter
fc "_tmpout" "rps1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"rps.exe" <"rps2.in" >"_tmpout"
time<enter
fc "_tmpout" "rps2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"rps.exe" <"rps3.in" >"_tmpout"
time<enter
fc "_tmpout" "rps3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"rps.exe" <"rps4.in" >"_tmpout"
time<enter
fc "_tmpout" "rps4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"rps.exe" <"rps5.in" >"_tmpout"
time<enter
fc "_tmpout" "rps5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"rps.exe" <"rps6.in" >"_tmpout"
time<enter
fc "_tmpout" "rps6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"rps.exe" <"rps7.in" >"_tmpout"
time<enter
fc "_tmpout" "rps7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"rps.exe" <"rps8.in" >"_tmpout"
time<enter
fc "_tmpout" "rps8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"rps.exe" <"rps9.in" >"_tmpout"
time<enter
fc "_tmpout" "rps9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"rps.exe" <"rps10.in" >"_tmpout"
time<enter
fc "_tmpout" "rps10.out" /W
pause
del _tmpout
echo.

