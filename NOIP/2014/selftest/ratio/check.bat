@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"ratio.exe" <"ratio1.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"ratio.exe" <"ratio2.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"ratio.exe" <"ratio3.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"ratio.exe" <"ratio4.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"ratio.exe" <"ratio5.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"ratio.exe" <"ratio6.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"ratio.exe" <"ratio7.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"ratio.exe" <"ratio8.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"ratio.exe" <"ratio9.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"ratio.exe" <"ratio10.in" >"_tmpout"
time<enter
fc "_tmpout" "ratio10.out" /W
pause
del _tmpout
echo.

