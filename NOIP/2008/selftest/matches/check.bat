@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"matches.exe" <"matches1.in" >"_tmpout"
time<enter
fc "_tmpout" "matches1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"matches.exe" <"matches2.in" >"_tmpout"
time<enter
fc "_tmpout" "matches2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"matches.exe" <"matches3.in" >"_tmpout"
time<enter
fc "_tmpout" "matches3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"matches.exe" <"matches4.in" >"_tmpout"
time<enter
fc "_tmpout" "matches4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"matches.exe" <"matches5.in" >"_tmpout"
time<enter
fc "_tmpout" "matches5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"matches.exe" <"matches6.in" >"_tmpout"
time<enter
fc "_tmpout" "matches6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"matches.exe" <"matches7.in" >"_tmpout"
time<enter
fc "_tmpout" "matches7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"matches.exe" <"matches8.in" >"_tmpout"
time<enter
fc "_tmpout" "matches8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"matches.exe" <"matches9.in" >"_tmpout"
time<enter
fc "_tmpout" "matches9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"matches.exe" <"matches10.in" >"_tmpout"
time<enter
fc "_tmpout" "matches10.out" /W
pause
del _tmpout
echo.

