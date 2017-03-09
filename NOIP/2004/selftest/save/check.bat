@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"save.exe" <"save1.in" >"_tmpout"
time<enter
fc "_tmpout" "save1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"save.exe" <"save2.in" >"_tmpout"
time<enter
fc "_tmpout" "save2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"save.exe" <"save3.in" >"_tmpout"
time<enter
fc "_tmpout" "save3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"save.exe" <"save4.in" >"_tmpout"
time<enter
fc "_tmpout" "save4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"save.exe" <"save5.in" >"_tmpout"
time<enter
fc "_tmpout" "save5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"save.exe" <"save6.in" >"_tmpout"
time<enter
fc "_tmpout" "save6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"save.exe" <"save7.in" >"_tmpout"
time<enter
fc "_tmpout" "save7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"save.exe" <"save8.in" >"_tmpout"
time<enter
fc "_tmpout" "save8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"save.exe" <"save9.in" >"_tmpout"
time<enter
fc "_tmpout" "save9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"save.exe" <"save10.in" >"_tmpout"
time<enter
fc "_tmpout" "save10.out" /W
pause
del _tmpout
echo.

