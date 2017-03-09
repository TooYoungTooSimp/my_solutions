@echo off
@set PATH=..\..\x64\Debug\;%PATH%
echo Test Case: 1
time<enter
"logic.exe" <"logic1.in" >"_tmpout"
time<enter
fc "_tmpout" "logic1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"logic.exe" <"logic2.in" >"_tmpout"
time<enter
fc "_tmpout" "logic2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"logic.exe" <"logic3.in" >"_tmpout"
time<enter
fc "_tmpout" "logic3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"logic.exe" <"logic4.in" >"_tmpout"
time<enter
fc "_tmpout" "logic4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"logic.exe" <"logic5.in" >"_tmpout"
time<enter
fc "_tmpout" "logic5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"logic.exe" <"logic6.in" >"_tmpout"
time<enter
fc "_tmpout" "logic6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"logic.exe" <"logic7.in" >"_tmpout"
time<enter
fc "_tmpout" "logic7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"logic.exe" <"logic8.in" >"_tmpout"
time<enter
fc "_tmpout" "logic8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"logic.exe" <"logic9.in" >"_tmpout"
time<enter
fc "_tmpout" "logic9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"logic.exe" <"logic10.in" >"_tmpout"
time<enter
fc "_tmpout" "logic10.out" /W
pause
del _tmpout
echo.

