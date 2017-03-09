@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"wireless.exe" <"wireless1.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"wireless.exe" <"wireless2.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"wireless.exe" <"wireless3.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"wireless.exe" <"wireless4.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"wireless.exe" <"wireless5.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"wireless.exe" <"wireless6.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"wireless.exe" <"wireless7.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"wireless.exe" <"wireless8.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"wireless.exe" <"wireless9.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"wireless.exe" <"wireless10.in" >"_tmpout"
time<enter
fc "_tmpout" "wireless10.out" /W
pause
del _tmpout
echo.

