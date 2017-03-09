@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"substring.exe" <"substring1.in" >"_tmpout"
time<enter
fc "_tmpout" "substring1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"substring.exe" <"substring2.in" >"_tmpout"
time<enter
fc "_tmpout" "substring2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"substring.exe" <"substring3.in" >"_tmpout"
time<enter
fc "_tmpout" "substring3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"substring.exe" <"substring4.in" >"_tmpout"
time<enter
fc "_tmpout" "substring4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"substring.exe" <"substring5.in" >"_tmpout"
time<enter
fc "_tmpout" "substring5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"substring.exe" <"substring6.in" >"_tmpout"
time<enter
fc "_tmpout" "substring6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"substring.exe" <"substring7.in" >"_tmpout"
time<enter
fc "_tmpout" "substring7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"substring.exe" <"substring8.in" >"_tmpout"
time<enter
fc "_tmpout" "substring8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"substring.exe" <"substring9.in" >"_tmpout"
time<enter
fc "_tmpout" "substring9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"substring.exe" <"substring10.in" >"_tmpout"
time<enter
fc "_tmpout" "substring10.out" /W
pause
del _tmpout
echo.

