@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"chorus.exe" <"chorus1.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"chorus.exe" <"chorus2.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"chorus.exe" <"chorus3.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"chorus.exe" <"chorus4.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"chorus.exe" <"chorus5.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"chorus.exe" <"chorus6.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"chorus.exe" <"chorus7.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"chorus.exe" <"chorus8.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"chorus.exe" <"chorus9.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"chorus.exe" <"chorus10.in" >"_tmpout"
time<enter
fc "_tmpout" "chorus10.out" /W
pause
del _tmpout
echo.

