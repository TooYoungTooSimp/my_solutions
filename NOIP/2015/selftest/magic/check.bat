@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"magic.exe" <"magic1.in" >"_tmpout"
time<enter
fc "_tmpout" "magic1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"magic.exe" <"magic2.in" >"_tmpout"
time<enter
fc "_tmpout" "magic2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"magic.exe" <"magic3.in" >"_tmpout"
time<enter
fc "_tmpout" "magic3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"magic.exe" <"magic4.in" >"_tmpout"
time<enter
fc "_tmpout" "magic4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"magic.exe" <"magic5.in" >"_tmpout"
time<enter
fc "_tmpout" "magic5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"magic.exe" <"magic6.in" >"_tmpout"
time<enter
fc "_tmpout" "magic6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"magic.exe" <"magic7.in" >"_tmpout"
time<enter
fc "_tmpout" "magic7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"magic.exe" <"magic8.in" >"_tmpout"
time<enter
fc "_tmpout" "magic8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"magic.exe" <"magic9.in" >"_tmpout"
time<enter
fc "_tmpout" "magic9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"magic.exe" <"magic10.in" >"_tmpout"
time<enter
fc "_tmpout" "magic10.out" /W
pause
del _tmpout
echo.

