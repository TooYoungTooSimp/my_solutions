@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"stone.exe" <"stone1.in" >"_tmpout"
time<enter
fc "_tmpout" "stone1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"stone.exe" <"stone2.in" >"_tmpout"
time<enter
fc "_tmpout" "stone2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"stone.exe" <"stone3.in" >"_tmpout"
time<enter
fc "_tmpout" "stone3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"stone.exe" <"stone4.in" >"_tmpout"
time<enter
fc "_tmpout" "stone4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"stone.exe" <"stone5.in" >"_tmpout"
time<enter
fc "_tmpout" "stone5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"stone.exe" <"stone6.in" >"_tmpout"
time<enter
fc "_tmpout" "stone6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"stone.exe" <"stone7.in" >"_tmpout"
time<enter
fc "_tmpout" "stone7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"stone.exe" <"stone8.in" >"_tmpout"
time<enter
fc "_tmpout" "stone8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"stone.exe" <"stone9.in" >"_tmpout"
time<enter
fc "_tmpout" "stone9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"stone.exe" <"stone10.in" >"_tmpout"
time<enter
fc "_tmpout" "stone10.out" /W
pause
del _tmpout
echo.

