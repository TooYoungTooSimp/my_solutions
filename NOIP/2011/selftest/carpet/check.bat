@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"carpet.exe" <"carpet1.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"carpet.exe" <"carpet2.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"carpet.exe" <"carpet3.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"carpet.exe" <"carpet4.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"carpet.exe" <"carpet5.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"carpet.exe" <"carpet6.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"carpet.exe" <"carpet7.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"carpet.exe" <"carpet8.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"carpet.exe" <"carpet9.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"carpet.exe" <"carpet10.in" >"_tmpout"
time<enter
fc "_tmpout" "carpet10.out" /W
pause
del _tmpout
echo.

