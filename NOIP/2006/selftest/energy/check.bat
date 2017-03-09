@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"energy.exe" <"energy1.in" >"_tmpout"
time<enter
fc "_tmpout" "energy1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"energy.exe" <"energy2.in" >"_tmpout"
time<enter
fc "_tmpout" "energy2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"energy.exe" <"energy3.in" >"_tmpout"
time<enter
fc "_tmpout" "energy3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"energy.exe" <"energy4.in" >"_tmpout"
time<enter
fc "_tmpout" "energy4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"energy.exe" <"energy5.in" >"_tmpout"
time<enter
fc "_tmpout" "energy5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"energy.exe" <"energy6.in" >"_tmpout"
time<enter
fc "_tmpout" "energy6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"energy.exe" <"energy7.in" >"_tmpout"
time<enter
fc "_tmpout" "energy7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"energy.exe" <"energy8.in" >"_tmpout"
time<enter
fc "_tmpout" "energy8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"energy.exe" <"energy9.in" >"_tmpout"
time<enter
fc "_tmpout" "energy9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"energy.exe" <"energy10.in" >"_tmpout"
time<enter
fc "_tmpout" "energy10.out" /W
pause
del _tmpout
echo.

