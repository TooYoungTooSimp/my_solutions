@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"twostack.exe" <"twostack1.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"twostack.exe" <"twostack2.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"twostack.exe" <"twostack3.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"twostack.exe" <"twostack4.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"twostack.exe" <"twostack5.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"twostack.exe" <"twostack6.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"twostack.exe" <"twostack7.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"twostack.exe" <"twostack8.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"twostack.exe" <"twostack9.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"twostack.exe" <"twostack10.in" >"_tmpout"
time<enter
fc "_tmpout" "twostack10.out" /W
pause
del _tmpout
echo.

