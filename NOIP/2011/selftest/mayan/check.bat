@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"mayan.exe" <"mayan1.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"mayan.exe" <"mayan2.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"mayan.exe" <"mayan3.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"mayan.exe" <"mayan4.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"mayan.exe" <"mayan5.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"mayan.exe" <"mayan6.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"mayan.exe" <"mayan7.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"mayan.exe" <"mayan8.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"mayan.exe" <"mayan9.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"mayan.exe" <"mayan10.in" >"_tmpout"
time<enter
fc "_tmpout" "mayan10.out" /W
pause
del _tmpout
echo.

