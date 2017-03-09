@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"circle.exe" <"circle1.in" >"_tmpout"
time<enter
fc "_tmpout" "circle1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"circle.exe" <"circle2.in" >"_tmpout"
time<enter
fc "_tmpout" "circle2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"circle.exe" <"circle3.in" >"_tmpout"
time<enter
fc "_tmpout" "circle3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"circle.exe" <"circle4.in" >"_tmpout"
time<enter
fc "_tmpout" "circle4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"circle.exe" <"circle5.in" >"_tmpout"
time<enter
fc "_tmpout" "circle5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"circle.exe" <"circle6.in" >"_tmpout"
time<enter
fc "_tmpout" "circle6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"circle.exe" <"circle7.in" >"_tmpout"
time<enter
fc "_tmpout" "circle7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"circle.exe" <"circle8.in" >"_tmpout"
time<enter
fc "_tmpout" "circle8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"circle.exe" <"circle9.in" >"_tmpout"
time<enter
fc "_tmpout" "circle9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"circle.exe" <"circle10.in" >"_tmpout"
time<enter
fc "_tmpout" "circle10.out" /W
pause
del _tmpout
echo.

