@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"spy.exe" <"spy1.in" >"_tmpout"
time<enter
fc "_tmpout" "spy1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"spy.exe" <"spy2.in" >"_tmpout"
time<enter
fc "_tmpout" "spy2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"spy.exe" <"spy3.in" >"_tmpout"
time<enter
fc "_tmpout" "spy3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"spy.exe" <"spy4.in" >"_tmpout"
time<enter
fc "_tmpout" "spy4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"spy.exe" <"spy5.in" >"_tmpout"
time<enter
fc "_tmpout" "spy5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"spy.exe" <"spy6.in" >"_tmpout"
time<enter
fc "_tmpout" "spy6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"spy.exe" <"spy7.in" >"_tmpout"
time<enter
fc "_tmpout" "spy7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"spy.exe" <"spy8.in" >"_tmpout"
time<enter
fc "_tmpout" "spy8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"spy.exe" <"spy9.in" >"_tmpout"
time<enter
fc "_tmpout" "spy9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"spy.exe" <"spy10.in" >"_tmpout"
time<enter
fc "_tmpout" "spy10.out" /W
pause
del _tmpout
echo.

