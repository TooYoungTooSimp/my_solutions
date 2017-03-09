@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"equation.exe" <"equation1.in" >"_tmpout"
time<enter
fc "_tmpout" "equation1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"equation.exe" <"equation2.in" >"_tmpout"
time<enter
fc "_tmpout" "equation2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"equation.exe" <"equation3.in" >"_tmpout"
time<enter
fc "_tmpout" "equation3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"equation.exe" <"equation4.in" >"_tmpout"
time<enter
fc "_tmpout" "equation4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"equation.exe" <"equation5.in" >"_tmpout"
time<enter
fc "_tmpout" "equation5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"equation.exe" <"equation6.in" >"_tmpout"
time<enter
fc "_tmpout" "equation6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"equation.exe" <"equation7.in" >"_tmpout"
time<enter
fc "_tmpout" "equation7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"equation.exe" <"equation8.in" >"_tmpout"
time<enter
fc "_tmpout" "equation8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"equation.exe" <"equation9.in" >"_tmpout"
time<enter
fc "_tmpout" "equation9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"equation.exe" <"equation10.in" >"_tmpout"
time<enter
fc "_tmpout" "equation10.out" /W
pause
del _tmpout
echo.

