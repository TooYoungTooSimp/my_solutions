@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"equal.exe" <"equal1.in" >"_tmpout"
time<enter
fc "_tmpout" "equal1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"equal.exe" <"equal2.in" >"_tmpout"
time<enter
fc "_tmpout" "equal2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"equal.exe" <"equal3.in" >"_tmpout"
time<enter
fc "_tmpout" "equal3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"equal.exe" <"equal4.in" >"_tmpout"
time<enter
fc "_tmpout" "equal4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"equal.exe" <"equal5.in" >"_tmpout"
time<enter
fc "_tmpout" "equal5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"equal.exe" <"equal6.in" >"_tmpout"
time<enter
fc "_tmpout" "equal6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"equal.exe" <"equal7.in" >"_tmpout"
time<enter
fc "_tmpout" "equal7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"equal.exe" <"equal8.in" >"_tmpout"
time<enter
fc "_tmpout" "equal8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"equal.exe" <"equal9.in" >"_tmpout"
time<enter
fc "_tmpout" "equal9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"equal.exe" <"equal10.in" >"_tmpout"
time<enter
fc "_tmpout" "equal10.out" /W
pause
del _tmpout
echo.

