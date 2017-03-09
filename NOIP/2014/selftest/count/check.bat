@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"count.exe" <"count1.in" >"_tmpout"
time<enter
fc "_tmpout" "count1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"count.exe" <"count2.in" >"_tmpout"
time<enter
fc "_tmpout" "count2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"count.exe" <"count3.in" >"_tmpout"
time<enter
fc "_tmpout" "count3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"count.exe" <"count4.in" >"_tmpout"
time<enter
fc "_tmpout" "count4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"count.exe" <"count5.in" >"_tmpout"
time<enter
fc "_tmpout" "count5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"count.exe" <"count6.in" >"_tmpout"
time<enter
fc "_tmpout" "count6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"count.exe" <"count7.in" >"_tmpout"
time<enter
fc "_tmpout" "count7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"count.exe" <"count8.in" >"_tmpout"
time<enter
fc "_tmpout" "count8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"count.exe" <"count9.in" >"_tmpout"
time<enter
fc "_tmpout" "count9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"count.exe" <"count10.in" >"_tmpout"
time<enter
fc "_tmpout" "count10.out" /W
pause
del _tmpout
echo.

