@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"road.exe" <"road1.in" >"_tmpout"
time<enter
fc "_tmpout" "road1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"road.exe" <"road2.in" >"_tmpout"
time<enter
fc "_tmpout" "road2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"road.exe" <"road3.in" >"_tmpout"
time<enter
fc "_tmpout" "road3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"road.exe" <"road4.in" >"_tmpout"
time<enter
fc "_tmpout" "road4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"road.exe" <"road5.in" >"_tmpout"
time<enter
fc "_tmpout" "road5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"road.exe" <"road6.in" >"_tmpout"
time<enter
fc "_tmpout" "road6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"road.exe" <"road7.in" >"_tmpout"
time<enter
fc "_tmpout" "road7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"road.exe" <"road8.in" >"_tmpout"
time<enter
fc "_tmpout" "road8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"road.exe" <"road9.in" >"_tmpout"
time<enter
fc "_tmpout" "road9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"road.exe" <"road10.in" >"_tmpout"
time<enter
fc "_tmpout" "road10.out" /W
pause
del _tmpout
echo.

