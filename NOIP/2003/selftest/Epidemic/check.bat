@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"Epidemic.exe" <"Epidemic1.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"Epidemic.exe" <"Epidemic2.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"Epidemic.exe" <"Epidemic3.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"Epidemic.exe" <"Epidemic4.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"Epidemic.exe" <"Epidemic5.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"Epidemic.exe" <"Epidemic6.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"Epidemic.exe" <"Epidemic7.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"Epidemic.exe" <"Epidemic8.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"Epidemic.exe" <"Epidemic9.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"Epidemic.exe" <"Epidemic10.in" >"_tmpout"
time<enter
fc "_tmpout" "Epidemic10.out" /W
pause
del _tmpout
echo.

