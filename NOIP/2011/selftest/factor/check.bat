@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"factor.exe" <"factor1.in" >"_tmpout"
time<enter
fc "_tmpout" "factor1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"factor.exe" <"factor2.in" >"_tmpout"
time<enter
fc "_tmpout" "factor2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"factor.exe" <"factor3.in" >"_tmpout"
time<enter
fc "_tmpout" "factor3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"factor.exe" <"factor4.in" >"_tmpout"
time<enter
fc "_tmpout" "factor4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"factor.exe" <"factor5.in" >"_tmpout"
time<enter
fc "_tmpout" "factor5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"factor.exe" <"factor6.in" >"_tmpout"
time<enter
fc "_tmpout" "factor6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"factor.exe" <"factor7.in" >"_tmpout"
time<enter
fc "_tmpout" "factor7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"factor.exe" <"factor8.in" >"_tmpout"
time<enter
fc "_tmpout" "factor8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"factor.exe" <"factor9.in" >"_tmpout"
time<enter
fc "_tmpout" "factor9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"factor.exe" <"factor10.in" >"_tmpout"
time<enter
fc "_tmpout" "factor10.out" /W
pause
del _tmpout
echo.

