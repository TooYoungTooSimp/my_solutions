@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"flower.exe" <"flower1.in" >"_tmpout"
time<enter
fc "_tmpout" "flower1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"flower.exe" <"flower2.in" >"_tmpout"
time<enter
fc "_tmpout" "flower2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"flower.exe" <"flower3.in" >"_tmpout"
time<enter
fc "_tmpout" "flower3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"flower.exe" <"flower4.in" >"_tmpout"
time<enter
fc "_tmpout" "flower4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"flower.exe" <"flower5.in" >"_tmpout"
time<enter
fc "_tmpout" "flower5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"flower.exe" <"flower6.in" >"_tmpout"
time<enter
fc "_tmpout" "flower6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"flower.exe" <"flower7.in" >"_tmpout"
time<enter
fc "_tmpout" "flower7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"flower.exe" <"flower8.in" >"_tmpout"
time<enter
fc "_tmpout" "flower8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"flower.exe" <"flower9.in" >"_tmpout"
time<enter
fc "_tmpout" "flower9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"flower.exe" <"flower10.in" >"_tmpout"
time<enter
fc "_tmpout" "flower10.out" /W
pause
del _tmpout
echo.

