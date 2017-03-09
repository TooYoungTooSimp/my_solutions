@echo off
@set PATH=..\..\x64\Debug\;%PATH%
echo Test Case: 1
time<enter
"network.exe" <"network1.in" >"_tmpout"
time<enter
fc "_tmpout" "network1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"network.exe" <"network2.in" >"_tmpout"
time<enter
fc "_tmpout" "network2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"network.exe" <"network3.in" >"_tmpout"
time<enter
fc "_tmpout" "network3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"network.exe" <"network4.in" >"_tmpout"
time<enter
fc "_tmpout" "network4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"network.exe" <"network5.in" >"_tmpout"
time<enter
fc "_tmpout" "network5.out" /W
pause
del _tmpout
echo.

