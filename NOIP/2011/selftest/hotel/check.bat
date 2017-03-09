@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"hotel.exe" <"hotel1.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"hotel.exe" <"hotel2.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"hotel.exe" <"hotel3.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"hotel.exe" <"hotel4.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"hotel.exe" <"hotel5.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"hotel.exe" <"hotel6.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"hotel.exe" <"hotel7.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"hotel.exe" <"hotel8.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"hotel.exe" <"hotel9.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"hotel.exe" <"hotel10.in" >"_tmpout"
time<enter
fc "_tmpout" "hotel10.out" /W
pause
del _tmpout
echo.

