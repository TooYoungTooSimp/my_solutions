@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"flow.exe" <"flow1.in" >"_tmpout"
time<enter
fc "_tmpout" "flow1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"flow.exe" <"flow2.in" >"_tmpout"
time<enter
fc "_tmpout" "flow2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"flow.exe" <"flow3.in" >"_tmpout"
time<enter
fc "_tmpout" "flow3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"flow.exe" <"flow4.in" >"_tmpout"
time<enter
fc "_tmpout" "flow4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"flow.exe" <"flow5.in" >"_tmpout"
time<enter
fc "_tmpout" "flow5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"flow.exe" <"flow6.in" >"_tmpout"
time<enter
fc "_tmpout" "flow6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"flow.exe" <"flow7.in" >"_tmpout"
time<enter
fc "_tmpout" "flow7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"flow.exe" <"flow8.in" >"_tmpout"
time<enter
fc "_tmpout" "flow8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"flow.exe" <"flow9.in" >"_tmpout"
time<enter
fc "_tmpout" "flow9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"flow.exe" <"flow10.in" >"_tmpout"
time<enter
fc "_tmpout" "flow10.out" /W
pause
del _tmpout
echo.

